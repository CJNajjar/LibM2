/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_COMMAND_HPP
#define __LIBM2_COMMAND_HPP
#include "../game/CHARACTER.hpp"
#include "CommandData.hpp"
namespace libm2 {
    class ICommand {
    public:
        virtual bool isReplaced();
        virtual bool matchClosest();
        virtual bool usableFor(LPCHARACTER) = 0;
        virtual void use(LPCHARACTER, CommandData* cmd) = 0;
    };
}
#endif // __LIBM2_COMMAND_HPP
