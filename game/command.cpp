/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#include "command.hpp"
#include "../addr.hpp"
namespace libm2{
    command_info* cmd_info=(command_info*)Addr::command::cmd_info;
    const char* two_arguments(const char * src, char * one, size_t size_one, char * two, size_t size_two) {
        return ((const char *(*)(const char *, char *, size_t, char *, size_t))Addr::command::two_arguments)(src, one, size_one, two, size_two);
    }
}