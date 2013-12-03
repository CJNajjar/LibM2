/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "lua.hpp"
#include "../addr.hpp"
namespace libm2 {
    namespace lua {
        lua_dostring DoString = (lua_dostring) Addr::lua::DoString;
        lua_dofile DoFile = (lua_dofile) Addr::lua::DoFile;

        lua_tostring ToString = (lua_tostring) Addr::lua::ToString;
        lua_toboolean ToBoolean = (lua_toboolean) Addr::lua::ToBoolean;
        lua_tonumber ToNumber = (lua_tonumber) Addr::lua::ToNumber;
        lua_topointer ToPointer = (lua_topointer) Addr::lua::ToPointer;
        lua_tothread ToThread = (lua_tothread) Addr::lua::ToThread;
        lua_touserdata ToUserData = (lua_touserdata) Addr::lua::ToUserData;

        lua_pushboolean PushBoolean = (lua_pushboolean) Addr::lua::PushBoolean;
        lua_pushcclosure PushClosure = (lua_pushcclosure) Addr::lua::PushCClosure;
        lua_pushfstring PushFString = (lua_pushfstring) Addr::lua::PushFString;
        lua_pushlightuserdata PushLightUserData = (lua_pushlightuserdata) Addr::lua::PushLightUserData;
        lua_pushlstring PushLString = (lua_pushlstring) Addr::lua::PushLString;
        lua_pushnil PushNil = (lua_pushnil) Addr::lua::PushNil;
        lua_pushnumber PushNumber = (lua_pushnumber) Addr::lua::PushNumber;
        lua_pushstring PushString = (lua_pushstring) Addr::lua::PushString;
        lua_pushupvalues PushUpValues = (lua_pushupvalues) Addr::lua::PushUpValues;
        lua_pushvalue PushValue = (lua_pushvalue) Addr::lua::PushValue;
        lua_pushvfstring PushVFString = (lua_pushvfstring) Addr::lua::PushVFString;

        lua_isnumber IsNumber = (lua_isnumber) Addr::lua::IsNumber;
        lua_isstring IsString = (lua_isstring) Addr::lua::IsString;

        lua_settable SetTable = (lua_settable) Addr::lua::SetTable;
        lua_newtable NewTable = (lua_newtable) Addr::lua::NewTable;
        lua_gettop GetTop = (lua_gettop) Addr::lua::GetTop;
        lua_settop SetTop = (lua_settop) Addr::lua::SetTop;
        lua_rawseti RawSetI = (lua_rawseti) Addr::lua::RawSetI;
        lua_rawset RawSet = (lua_rawset) Addr::lua::RawSet;

        lua_type Type = (lua_type) Addr::lua::Type;
    }
}
