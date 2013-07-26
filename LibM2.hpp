#ifndef __LIBM2_LIBM2_HPP
#define __LIBM2_LIBM2_HPP
#include "game/stdInclude.hpp"
#include "Command.hpp"
#include "lib/singleton.hpp"
#include "utils/detours.h"
#include "lib/hook.hpp"
#include "game/quest/CQuestManager.hpp"
#include "utils/lua.hpp"
#include "IQuest.hpp"
namespace libm2{
typedef void(*tInterpretCommand)(LPCHARACTER,const char*, size_t);

class LibM2: public singleton<LibM2>{
  protected:
    std::map<std::string,ICommand*> m_map_command;
    std::map<std::string,tQuestTable> m_map_quest;
    MologieDetours::Detour<tInterpretCommand>*detour_interpretCommand;
    MologieDetours::Detour<void(*)(void)>*detour_registerQuestTables;
  public:
    LibM2();
    static void interpretCommand(LPCHARACTER ch,const char* data, size_t len);
    static void addCommand(std::string name,ICommand* cmd);
    static void registerQuestTables();
    static void addQuestFunction(std::string table,std::string name,lua_CFunction func);
    static void addQuestTable(std::string table, tQuestTable);
    static void addQuestTable(IQuest*);
};
}
#endif // __LIBM2_LIBM2_HPP
