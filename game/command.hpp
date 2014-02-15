/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_GAME_CMD_INFO_HPP
#define __LIBM2_GAME_CMD_INFO_HPP
#include "CHARACTER.hpp"
namespace libm2 {

    struct command_info {
        const char *command;
        void (*command_pointer)(LPCHARACTER, const char *, int, int);
        int subcmd;
        int minimum_position;
        int gm_level;
    };

    extern command_info* cmd_info;

}
#endif // __LIBM2_GAME_CMD_INFO_HPP