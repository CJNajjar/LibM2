/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_COMMAND_ORIGINALCOMMAND_HPP
#define __LIBM2_COMMAND_ORIGINALCOMMAND_HPP
#include "../game/CHARACTER.hpp"
#include "CommandData.hpp"
#include "../game/command.hpp"
#include "ICommand.hpp"
namespace libm2 {
    class OriginalCommand: public ICommand {
        OriginalCommand(command_info* cmd);
        virtual bool usableFor(LPCHARACTER);
        virtual void use(LPCHARACTER, CommandData* cmd);
    };
}
#endif // __LIBM2_COMMAND_ORIGINALCOMMAND_HPP
