#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <sstream>
#include <limits>
#include <cfloat>
// #include <cctype>


typedef struct s_nb {
	std::string	stringValue;
    std::string type;
	char        charValue;
    int         intValue;
    float       floatValue;
    double      doubleValue;
}				t_nb;

void           convert(const char *input);
std::string    numberType(std::string str);

#endif



