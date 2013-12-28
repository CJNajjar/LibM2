#include <idc.idc>

static FuncDump(start)
{
    auto ea, str,strd, count, ref;
    auto end;
	auto szFilePath, hFile;
    auto teststr;
	ea = start;
	
	SetStatus(IDA_STATUS_WAITING);
	if ((szFilePath = AskFile(1, "*.txt", "Select output dump file:")) == 0)
	{		
		Message("Aborted.");
		SetStatus(IDA_STATUS_READY);
		return;
	}
	fprintf(hFile,"Addr/Funcdump\n");
	if ((hFile = fopen(szFilePath, "wb")) != 0){
	
		while( ea != BADADDR )
		{
			str = GetFunctionName(ea);
			if( str != 0 )
			{
				end = FindFuncEnd(ea);

				count = 0;
				ref = RfirstB(ea);
				while(ref != BADADDR)
				{
					count = count + 1;
					ref = RnextB(ea, ref);
				}
				strd=Demangle(str, INF_LONG_DN);
				if (strd!=0){
					fprintf(hFile,"0x%X\t\t%s\t\t%s\n", ea, str,strd);
				}
			}

			ea = NextFunction(ea);
		}
	}
}

static main() 
{
    FuncDump(MinEA());
}