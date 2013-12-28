import random
import gdb
import os
import re
toParse=["_SQLMsg"]
OUTDIR="out"
def parseArguments(string): # http://stackoverflow.com/a/4285211/1318435
	stack = [0]
	nested=0
	for i, c in enumerate(string):
		if c == '<':
			nested += 1
		elif c == '>':
			nested -= 1
		elif c=="," and nested==0:
			start = stack.pop()
			yield string[start: i].strip()
			stack.append(i+1)
	yield string[stack.pop():].strip()

class Function():
	def __init__(self, address, mangled, unmangled, classname):
		self.address = address
		self.mangled = mangled
		self.unmangled = unmangled
		self.enumName = None
		self.argTypes = []
		self.argNames = []
		self.funcname = unmangled.split("(")[0].split("::").pop()
		self.returnType = None
		self.classname = classname
	def getReturnType(self):
		if self.returnType != None:
			return self.returnType
		self.parseType()
		return self.returnType
	def getArgTypes(self):
		if self.argTypes:
			return self.argTypes
		self.parseType()
		return self.argTypes
	def getArgNames(self):
		if self.argNames:
			return self.argNames
		count = len(self.getArgTypes())
		found = 0
		scope = gdb.execute("info scope {0}".format(self.mangled),False,True)
		for line in iter(scope.splitlines()):
			if line.startswith("Symbol ") and not "is a function at" in line and not "is optimized out" in line:
				self.argNames.append(line[7:].split(" ")[0])
				found+=1
				if found == count:
					break;
		if found < count:
			for i in range(count-found):
				self.argNames.append("a{0}".format(i))
		return self.argNames

	def parseType(self): 
		type = gdb.execute("whatis {0}".format(self.mangled),False, True)
		if not type.startswith("type = ") or "type = <text variable, no debug info>" in type:
			raise Exception("Couldn't get type string!\n{0} func: {1}".format(type,self.mangled))
		returnType, argTypes = type[7:].split("(")
		self.returnType = returnType.strip()
		self.argTypes = list(parseArguments(argTypes.split(")")[0]))
	def getEnumName(self):
		if self.enumName != None:
			return self.enumName
		self.enumName="{0}".format(self.funcname.replace("~","__"))
		if len(self.getArgTypes()) > 1:
			self.enumName = self.enumName+"__{0}".format(re.sub("[^0-9a-zA-Z_]+","_","_".join(self.getArgTypes()[1:])))
		return self.enumName
classes={}
for c in toParse:
	classes[c]=[]

f = open("addr.txt","r")
for line in f:
	addr,mangled,func = line.split("\t\t")
	func= func[:-1]
	for c in toParse:
		if not func.startswith(c+"::"):
			continue 
		classes[c].append(Function(addr, mangled, func, c))
# sort for easier comparing when updating to different versions
for classname,functions in classes.iteritems():
	functions.sort(key=lambda x: x.unmangled)
	classes[classname]=functions
# addr header
addrout = open(OUTDIR+"/addr.hpp","w")
for classname,functions in classes.iteritems():
	addrout.write('enum class {0}{{\n'.format(classname))
	for func in functions:
		addrout.write('\t{0}={1}, // {2}, {3}\n'.format(func.getEnumName(),func.address, func.unmangled, func.mangled))
	addrout.write('}\n')
addrout.close()
# write cpp files
for classname,functions in classes.iteritems():
	fclass = open(OUTDIR+"/{0}.cpp".format(classname.replace("::","__")),"w")
	for func in functions:
		fclass.write('''
{0} {1}({2}) {3}{{
	{4} (({0}(*)({5}))Addr::{6})({7});
}}'''
			.format(
				func.returnType, 
				"{0}::{1}".format(classname,func.funcname), 
				', '.join('%s %s' % t for t in zip(func.getArgTypes()[1:], func.getArgNames()[1:])), # arguments
				"const" if func.getArgTypes()[0][:5]=="const" else "", # const function
				"return" if func.returnType!="void" else "",
				', '.join(func.getArgTypes()),
				"{0}::{1}".format(classname,func.getEnumName()),
				', '.join(["this"]+func.getArgNames()[1:]),
				)
			)
	fclass.close()
