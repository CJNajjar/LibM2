/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "ICommand.hpp"
namespace libm2{
    bool ICommand::isReplaced(){
        return false;
    }
    bool ICommand::matchClosest(){
        return true;
    }
}