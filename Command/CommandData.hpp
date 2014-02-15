/* This file belongs to the LibM2 library (http://github.com/imermcmaps/LibM2)
 * Copyright (c) 2013, iMer (www.imer.cc)
 * All rights reserved.
 * Licensed under the BSD 3-clause license (http://opensource.org/licenses/BSD-3-Clause)
 */
#ifndef __LIBM2_COMMAND_COMMANDDATA_HPP
#define __LIBM2_COMMAND_COMMANDDATA_HPP
#include "../game/CHARACTER.hpp"

namespace libm2 {

    class CommandData {
    protected:
        LPCHARACTER m_ch;
        std::string m_data;
        std::vector<std::string> m_arguments;
    public:
        CommandData(CHARACTER* ch, const char* data, size_t len);
        std::string getArgument(unsigned int n);
        std::vector<std::string> getArguments();
        std::string getData();
    };
}
#endif // __LIBM2_COMMAND_COMMANDDATA_HPP
