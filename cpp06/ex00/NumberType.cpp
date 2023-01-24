#include "Convert.hpp"

std::string numberType(std::string str)
{
    if (str.find_first_not_of("0123456789-.f") == std::string::npos)
    {
        if (str.find(".") != std::string::npos)
        {
            if (str.find("f") != std::string::npos)
                return "float";
            else
                return "double";
        }
        else
        {
            if (str.size() == 1 && std::isdigit(str[0]))
                return "int";
            else if (str.size() == 1)
                return "char";
            else if (std::stod(str) > INT_MAX || (std::stod(str) < INT_MIN && str.size() > 1))
                return "double";
            else
                return "int";
        }
    }
    else
    {
        if (str == "-inff" || str == "inff" || str == "nanf" || str == "-inf" || str == "inf" || str == "nan")
            return "special";
        else if (str.size() == 1)
            return "char";
        else
            return "impossible";
    }

}