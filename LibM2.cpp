/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "LibM2.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>
#include "lib/log.hpp"
#include <stdlib.h>
#include <errno.h>
#include <dlfcn.h>
#include <dirent.h>
namespace libm2 {

    LibM2::LibM2() : singleton::singleton() {
        assert(!ms_singleton);
        detour_interpretCommand = simpleHook<tInterpretCommand>((unsigned int) Addr::misc::interpret_command, interpretCommand);
        detour_registerQuestTables = simpleHook<void(*)(void) >((unsigned int) Addr::quest::misc::RegisterAffectFunctionTable, registerQuestTables);
    }

    void LibM2::loadPlugins() {
        SYSLOG << "Loading plugins:" << std::endl;
        // unload loaded plugins
        int err;
        for (auto handle : m_plugins) {
            void* deinitialize = dlsym(handle, "deinitialize");
            if (deinitialize) {
                ((void(*)(void))deinitialize)();
            }
            if ((err = dlclose(handle)) != 0) {
                std::cerr << "Error closing ( #" << err << ", " << dlerror() << ")" << std::endl;
                abort();
            }
        }
        // load plugins, again
        DIR* dirFile = opendir("plugins");
        if (dirFile) {
            struct dirent* hFile;
            errno = 0;
            while ((hFile = readdir(dirFile)) != NULL) {
                if (strstr(hFile->d_name, ".so")) {
                    SYSLOG << "Found file " << hFile->d_name << std::endl;
                    // load plugin
                    void * handle = dlopen((std::string("plugins/") + hFile->d_name).c_str(), RTLD_LAZY);
                    if (!handle) {
                        std::cerr << "Could not load plugin 'plugins/" << hFile->d_name << "' (" << dlerror() << ")" << std::endl;
                        SYSERR << "Could not load plugin 'plugins/" << hFile->d_name << "' (" << dlerror() << ")" << std::endl;
                        continue;
                    }
                    void * initialize = dlsym(handle, "initialize");
                    if (!initialize) {
                        std::cerr << "Could not load plugin " << hFile->d_name << ". inizialize is not implemented" << std::endl;
                        SYSERR << "Could not load plugin " << hFile->d_name << ". inizialize is not implemented" << std::endl;
                        continue;
                    }
                    void * getName = dlsym(handle, "getName");
                    if (!getName) {
                        std::cerr << "Could not load plugin " << hFile->d_name << ". getName is not implemented" << std::endl;
                        SYSERR << "Could not load plugin " << hFile->d_name << ". getName is not implemented" << std::endl;
                        continue;
                    }
                    void * getFullName = dlsym(handle, "getFullName");
                    if (!getFullName) {
                        std::cerr << "Could not load plugin " << hFile->d_name << ". getFullName is not implemented" << std::endl;
                        SYSERR << "Could not load plugin " << hFile->d_name << ". getFullName is not implemented" << std::endl;
                        continue;
                    }
                    SYSLOG << "Loading plugin " << ((const char*(*)(void))getFullName)() << "(" << hFile->d_name << ")" << std::endl;
                    m_plugins.push_back(handle);
                    if (((bool(*)(void))initialize)()){
                        SYSLOG << "Success" << std::endl;
                    }else{
                        // plugin is responsibly for logging why it didnt inizialize
                    }
                }
            }
            closedir(dirFile);
            // inizialize plugins
        } else {
            std::cerr << "Could not open plugin directory 'plugins' (errno #" << errno << ")" << std::endl;
            abort();
        }
        SYSLOG << "Done loading plugins." << std::endl;
    }

    void LibM2::interpretCommand(LPCHARACTER ch, const char* data, size_t len) {
        LibM2* self = instance();
        std::istringstream iss(std::string(data, len));
        std::vector<std::string> arguments;
        std::copy(std::istream_iterator<std::string>(iss), std::istream_iterator<std::string>(), std::back_inserter<std::vector<std::string> >(arguments));
        if (self->m_map_command.find(arguments.front()) != self->m_map_command.end()) {
            ICommand* cmd = self->m_map_command[arguments.front()];
            if (cmd->usableFor(ch)) {
                cmd->use(ch, arguments);
                return;
            } else if (cmd->isReplaced()) {
                ch->ChatPacket(1, locale_find("그런 명령어는 없습니다"));
                return;
            }
        }
        self->detour_interpretCommand->GetOriginalFunction()(ch, data, len);
    }

    void LibM2::addCommand(std::string name, ICommand* cmd) {
        std::cout << "**** Added custom command: " << name << std::endl;
        instance()->m_map_command.insert(std::pair<std::string, ICommand*>(name, cmd));
    }

    void LibM2::registerQuestTables() {
        LibM2* self = instance();
        // register affect table (hooked function)
        self->detour_registerQuestTables->GetOriginalFunction()();
        SYSLOG << "Registering quest tables" << std::endl;
        for (std::map<std::string, tQuestTable>::iterator it = self->m_map_quest.begin(); it != self->m_map_quest.end(); it++) {
            luaL_reg* ltable = new luaL_reg[it->second.size() + 1];
            int i = 0;
            for (tQuestTable::iterator itF = it->second.begin(); itF != it->second.end(); itF++) {
                SYSLOG << "Adding " << it->first << "." << itF->first << std::endl;
                char* buffer = new char[itF->first.length() + 1];
                strcpy(buffer, itF->first.c_str());
                ltable[i].name = buffer;
                ltable[i].func = itF->second;
                i++;
            }
            ltable[i].name = NULL;
            ltable[i].func = NULL;
            quest::CQuestManager::instance()->AddLuaFunctionTable(it->first.c_str(), ltable);
        }
    };

    void LibM2::addQuestFunction(std::string table, std::string name, lua_CFunction func) {
        if (instance()->m_map_quest.find(table) == instance()->m_map_quest.end()) {
            // insert new, empty map
            instance()->m_map_quest.insert(std::pair<std::string, tQuestTable>(table, tQuestTable()));
        }
        instance()->m_map_quest.at(table).insert(std::pair<std::string, lua_CFunction>(name, func));
    };

    void LibM2::addQuestTable(std::string tablename, tQuestTable table) {
        LibM2* self = instance();
        // Merge if already exists - overwriting already existing functions
        if (self->m_map_quest.find(tablename) != self->m_map_quest.end()) {
            try {
                tQuestTable to = self->m_map_quest.at(tablename);
                for (tQuestTable::iterator it = table.begin(); it != table.end(); it++) {
                    to.insert(std::pair<std::string, lua_CFunction>(it->first, it->second));
                }
                return;
            } catch (std::out_of_range& e) { // catch odd exceptions
            }
        }
        // otherwise just insert as new map
        self->m_map_quest.insert(std::pair<std::string, tQuestTable>(tablename, table));
    };

    void LibM2::addQuestTable(IQuest* q) {
        addQuestTable(q->getName(), q->getTable());
    };

    void LibM2::removePRELOAD() {
        int i;
        for (i = 0; environ[i]; i++) {
            if (strstr(environ[i], "LD_PRELOAD=") || strstr(environ[i], "LD_32_PRELOAD=")) {
                std::cout << "hacking out LD_PRELOAD from environ[" << i << "]" << std::endl;
                environ[i][0] = 'D';
            }
        }
    };

    bool LibM2::isRightRevision() {
        std::string Revision((char*) libm2::Addr::misc::version, libm2::Addr::version_length);
        return Revision == std::string(libm2::Addr::version_string);
    }

    std::string LibM2::getRevision() {
        return libm2::Addr::version_string;
    }
}
