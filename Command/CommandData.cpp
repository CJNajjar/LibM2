#include "CommandData.hpp"
#include <regex>
namespace libm2 {

    CommandData::CommandData(CHARACTER* ch, const char* data, size_t len) {
        // double dollar
        std::regex ddre("$");
        std::string ddata = std::regex_replace(std::string(data, len), ddre, std::string("$$$$"), std::regex_constants::match_any); // $ need to be quoted, so that's just 2x$
        m_data=ddata;
        //
        std::string tmp_arg = "";
        char quotes_opened = 0;
        for (unsigned int i = 1; i < ddata.length(); i++) {
            if (ddata[i] == ' ' && quotes_opened == 0) {
                m_arguments.push_back(tmp_arg);
                tmp_arg = "";
                continue;
            }
            if (ddata[i] == '"') {
                if (quotes_opened == '"') {
                    quotes_opened = 0;
                    continue;
                }
                if (quotes_opened == 0) {
                    quotes_opened = '"';
                    continue;
                }
            }
            if (ddata[i] == '\'') {
                if (quotes_opened == '\'') {
                    quotes_opened = 0;
                    continue;
                }
                if (quotes_opened == 0) {
                    quotes_opened = '\'';
                    continue;
                }
            }
            tmp_arg.push_back(ddata[i]);
        }
    }

    std::string CommandData::getArgument(unsigned int n) {
        if (m_arguments.size() < n){
            return "";
        }
        return m_arguments[n];
    }
    std::vector<std::string> CommandData::getArguments() {
        return m_arguments;
    }
    std::string CommandData::getData(){
        return m_data;
    }

}
