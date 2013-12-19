#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Generic
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Command.o \
	${OBJECTDIR}/IQuest.o \
	${OBJECTDIR}/LibM2.o \
	${OBJECTDIR}/game/CEntity.o \
	${OBJECTDIR}/game/CFSM.o \
	${OBJECTDIR}/game/CGuild.o \
	${OBJECTDIR}/game/CGuildManager.o \
	${OBJECTDIR}/game/CHARACTER.o \
	${OBJECTDIR}/game/CHARACTER_MANAGER.o \
	${OBJECTDIR}/game/CHorseRider.o \
	${OBJECTDIR}/game/CInputAuth.o \
	${OBJECTDIR}/game/CInputClose.o \
	${OBJECTDIR}/game/CInputDB.o \
	${OBJECTDIR}/game/CInputDead.o \
	${OBJECTDIR}/game/CInputHandshake.o \
	${OBJECTDIR}/game/CInputLogin.o \
	${OBJECTDIR}/game/CInputMain.o \
	${OBJECTDIR}/game/CInputP2P.o \
	${OBJECTDIR}/game/CInputProcessor.o \
	${OBJECTDIR}/game/CItem.o \
	${OBJECTDIR}/game/CPetActor.o \
	${OBJECTDIR}/game/CPetSystem.o \
	${OBJECTDIR}/game/CPrivManager.o \
	${OBJECTDIR}/game/CShopManager.o \
	${OBJECTDIR}/game/CState.o \
	${OBJECTDIR}/game/CThreeWayWar.o \
	${OBJECTDIR}/game/DBManager.o \
	${OBJECTDIR}/game/DESC.o \
	${OBJECTDIR}/game/DESC_MANAGER.o \
	${OBJECTDIR}/game/EVENT.o \
	${OBJECTDIR}/game/ITEM_MANAGER.o \
	${OBJECTDIR}/game/LogManager.o \
	${OBJECTDIR}/game/P2P_MANAGER.o \
	${OBJECTDIR}/game/SECTREE.o \
	${OBJECTDIR}/game/SECTREE_MANAGER.o \
	${OBJECTDIR}/game/SECTREE_MAP.o \
	${OBJECTDIR}/game/SQLMsg.o \
	${OBJECTDIR}/game/SQLResult.o \
	${OBJECTDIR}/game/TAffectFlag.o \
	${OBJECTDIR}/game/TEMP_BUFFER.o \
	${OBJECTDIR}/game/VID.o \
	${OBJECTDIR}/game/building/CLand.o \
	${OBJECTDIR}/game/building/CManager.o \
	${OBJECTDIR}/game/building/CObject.o \
	${OBJECTDIR}/game/global.o \
	${OBJECTDIR}/game/lua.o \
	${OBJECTDIR}/game/marriage/CManager.o \
	${OBJECTDIR}/game/marriage/TMarriage.o \
	${OBJECTDIR}/game/misc.o \
	${OBJECTDIR}/game/quest/CQuestManager.o \
	${OBJECTDIR}/game/quest/PC.o \
	${OBJECTDIR}/lib/dif.o \
	${OBJECTDIR}/lib/log.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/utils/hde/hde32.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-I/usr/local/include -L/usr/local/lib -lyaml-cpp -L/usr/local/lib/mysql -lmysqlclient -pthread -lz -lm

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/LibM2.${CND_DLIB_EXT}

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/LibM2.${CND_DLIB_EXT}: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/LibM2.${CND_DLIB_EXT} ${OBJECTFILES} ${LDLIBSOPTIONS} -shared -fPIC

${OBJECTDIR}/Command.o: Command.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Command.o Command.cpp

${OBJECTDIR}/IQuest.o: IQuest.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/IQuest.o IQuest.cpp

${OBJECTDIR}/LibM2.o: LibM2.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/LibM2.o LibM2.cpp

${OBJECTDIR}/game/CEntity.o: game/CEntity.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CEntity.o game/CEntity.cpp

${OBJECTDIR}/game/CFSM.o: game/CFSM.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CFSM.o game/CFSM.cpp

${OBJECTDIR}/game/CGuild.o: game/CGuild.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CGuild.o game/CGuild.cpp

${OBJECTDIR}/game/CGuildManager.o: game/CGuildManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CGuildManager.o game/CGuildManager.cpp

${OBJECTDIR}/game/CHARACTER.o: game/CHARACTER.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CHARACTER.o game/CHARACTER.cpp

${OBJECTDIR}/game/CHARACTER_MANAGER.o: game/CHARACTER_MANAGER.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CHARACTER_MANAGER.o game/CHARACTER_MANAGER.cpp

${OBJECTDIR}/game/CHorseRider.o: game/CHorseRider.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CHorseRider.o game/CHorseRider.cpp

${OBJECTDIR}/game/CInputAuth.o: game/CInputAuth.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputAuth.o game/CInputAuth.cpp

${OBJECTDIR}/game/CInputClose.o: game/CInputClose.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputClose.o game/CInputClose.cpp

${OBJECTDIR}/game/CInputDB.o: game/CInputDB.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputDB.o game/CInputDB.cpp

${OBJECTDIR}/game/CInputDead.o: game/CInputDead.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputDead.o game/CInputDead.cpp

${OBJECTDIR}/game/CInputHandshake.o: game/CInputHandshake.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputHandshake.o game/CInputHandshake.cpp

${OBJECTDIR}/game/CInputLogin.o: game/CInputLogin.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputLogin.o game/CInputLogin.cpp

${OBJECTDIR}/game/CInputMain.o: game/CInputMain.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputMain.o game/CInputMain.cpp

${OBJECTDIR}/game/CInputP2P.o: game/CInputP2P.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputP2P.o game/CInputP2P.cpp

${OBJECTDIR}/game/CInputProcessor.o: game/CInputProcessor.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CInputProcessor.o game/CInputProcessor.cpp

${OBJECTDIR}/game/CItem.o: game/CItem.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CItem.o game/CItem.cpp

${OBJECTDIR}/game/CPetActor.o: game/CPetActor.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CPetActor.o game/CPetActor.cpp

${OBJECTDIR}/game/CPetSystem.o: game/CPetSystem.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CPetSystem.o game/CPetSystem.cpp

${OBJECTDIR}/game/CPrivManager.o: game/CPrivManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CPrivManager.o game/CPrivManager.cpp

${OBJECTDIR}/game/CShopManager.o: game/CShopManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CShopManager.o game/CShopManager.cpp

${OBJECTDIR}/game/CState.o: game/CState.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CState.o game/CState.cpp

${OBJECTDIR}/game/CThreeWayWar.o: game/CThreeWayWar.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/CThreeWayWar.o game/CThreeWayWar.cpp

${OBJECTDIR}/game/DBManager.o: game/DBManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/DBManager.o game/DBManager.cpp

${OBJECTDIR}/game/DESC.o: game/DESC.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/DESC.o game/DESC.cpp

${OBJECTDIR}/game/DESC_MANAGER.o: game/DESC_MANAGER.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/DESC_MANAGER.o game/DESC_MANAGER.cpp

${OBJECTDIR}/game/EVENT.o: game/EVENT.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/EVENT.o game/EVENT.cpp

${OBJECTDIR}/game/ITEM_MANAGER.o: game/ITEM_MANAGER.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/ITEM_MANAGER.o game/ITEM_MANAGER.cpp

${OBJECTDIR}/game/LogManager.o: game/LogManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/LogManager.o game/LogManager.cpp

${OBJECTDIR}/game/P2P_MANAGER.o: game/P2P_MANAGER.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/P2P_MANAGER.o game/P2P_MANAGER.cpp

${OBJECTDIR}/game/SECTREE.o: game/SECTREE.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/SECTREE.o game/SECTREE.cpp

${OBJECTDIR}/game/SECTREE_MANAGER.o: game/SECTREE_MANAGER.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/SECTREE_MANAGER.o game/SECTREE_MANAGER.cpp

${OBJECTDIR}/game/SECTREE_MAP.o: game/SECTREE_MAP.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/SECTREE_MAP.o game/SECTREE_MAP.cpp

${OBJECTDIR}/game/SQLMsg.o: game/SQLMsg.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/SQLMsg.o game/SQLMsg.cpp

${OBJECTDIR}/game/SQLResult.o: game/SQLResult.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/SQLResult.o game/SQLResult.cpp

${OBJECTDIR}/game/TAffectFlag.o: game/TAffectFlag.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/TAffectFlag.o game/TAffectFlag.cpp

${OBJECTDIR}/game/TEMP_BUFFER.o: game/TEMP_BUFFER.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/TEMP_BUFFER.o game/TEMP_BUFFER.cpp

${OBJECTDIR}/game/VID.o: game/VID.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/VID.o game/VID.cpp

${OBJECTDIR}/game/building/CLand.o: game/building/CLand.cpp 
	${MKDIR} -p ${OBJECTDIR}/game/building
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/building/CLand.o game/building/CLand.cpp

${OBJECTDIR}/game/building/CManager.o: game/building/CManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/game/building
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/building/CManager.o game/building/CManager.cpp

${OBJECTDIR}/game/building/CObject.o: game/building/CObject.cpp 
	${MKDIR} -p ${OBJECTDIR}/game/building
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/building/CObject.o game/building/CObject.cpp

${OBJECTDIR}/game/global.o: game/global.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/global.o game/global.cpp

${OBJECTDIR}/game/lua.o: game/lua.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/lua.o game/lua.cpp

${OBJECTDIR}/game/marriage/CManager.o: game/marriage/CManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/game/marriage
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/marriage/CManager.o game/marriage/CManager.cpp

${OBJECTDIR}/game/marriage/TMarriage.o: game/marriage/TMarriage.cpp 
	${MKDIR} -p ${OBJECTDIR}/game/marriage
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/marriage/TMarriage.o game/marriage/TMarriage.cpp

${OBJECTDIR}/game/misc.o: game/misc.cpp 
	${MKDIR} -p ${OBJECTDIR}/game
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/misc.o game/misc.cpp

${OBJECTDIR}/game/quest/CQuestManager.o: game/quest/CQuestManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/game/quest
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/quest/CQuestManager.o game/quest/CQuestManager.cpp

${OBJECTDIR}/game/quest/PC.o: game/quest/PC.cpp 
	${MKDIR} -p ${OBJECTDIR}/game/quest
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/game/quest/PC.o game/quest/PC.cpp

${OBJECTDIR}/lib/dif.o: lib/dif.cpp 
	${MKDIR} -p ${OBJECTDIR}/lib
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lib/dif.o lib/dif.cpp

${OBJECTDIR}/lib/log.o: lib/log.cpp 
	${MKDIR} -p ${OBJECTDIR}/lib
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lib/log.o lib/log.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -Wall -std=c++11 -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/utils/hde/hde32.o: utils/hde/hde32.c 
	${MKDIR} -p ${OBJECTDIR}/utils/hde
	${RM} "$@.d"
	$(COMPILE.c) -g -Wall -fPIC  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/utils/hde/hde32.o utils/hde/hde32.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/LibM2.${CND_DLIB_EXT}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
