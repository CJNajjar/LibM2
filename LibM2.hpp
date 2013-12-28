/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_LIBM2_HPP
#define __LIBM2_LIBM2_HPP
#include "game/stdInclude.hpp"
#include "Command/ICommand.hpp"
#include "lib/singleton.hpp"
#include "utils/detours.h"
#include "lib/hook.hpp"
#include "game/quest/CQuestManager.hpp"
#include "utils/lua.hpp"
#include "IQuest.hpp"
#include "lib/event.hpp"
extern char** environ;
namespace libm2 {
    typedef void(*tInterpretCommand)(LPCHARACTER, const char*, size_t);

    class LibM2 : public singleton<LibM2> {
    protected:
        std::map<std::string, ICommand*> m_map_command;
        std::map<std::string, tQuestTable> m_map_quest;
        MologieDetours::Detour<tInterpretCommand>*detour_interpretCommand;
        MologieDetours::Detour<void(*)(void) >*detour_registerQuestTables;
        std::vector<void*> m_plugins;
    public:
        //events<CHARACTER*>* onDeath;
    public:
        LibM2();
        void loadPlugins();
        static void interpretCommand(LPCHARACTER ch, const char* data, size_t len);
        void addCommand(std::string name, ICommand* cmd);
        ICommand* removeCommand(std::string name);
        ICommand* getCommand(std::string name);
        bool isCommand(std::string name);
        static void registerQuestTables();
        static void addQuestFunction(std::string table, std::string name, lua_CFunction func);
        static void addQuestTable(std::string table, tQuestTable);
        static void addQuestTable(IQuest*);
        static void removePRELOAD();
        static bool isRightRevision();
        static std::string getRevision();
    };
}
#endif // __LIBM2_LIBM2_HPP
