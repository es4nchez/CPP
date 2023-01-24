#include "Convert.hpp"


void    printChar(t_nb *nb)
{
    if (nb->intValue > 255 || nb->intValue < 0)
        std::cout << "char : impossible" << std::endl;
    else if (std::isprint(nb->charValue))
        std::cout << "char : '" << nb->charValue << "'" << std::endl;
    else
        std::cout << "char : Non-printable character" << std::endl;
}

void    printInt(t_nb *nb)
{
    int     tmp = 0;
    char    *pEnd;

    if (std::strtol(&nb->stringValue[0], &pEnd, tmp) > INT_MAX)
        std::cout << "int : Literal is bigger than MAX_INT"<< std::endl;
    else if (std::strtol(&nb->stringValue[0], &pEnd, tmp) < INT_MIN)
        std::cout << "int : Literal is smaller than MIN_INT"<< std::endl;
    else
        std::cout << "int : " << nb->intValue << std::endl;

}

void    printFloat(t_nb *nb)
{

    int     tmp = 0;
    char    *pEnd;

    if (std::strtol(&nb->stringValue[0], &pEnd, tmp) > FLT_MAX)
        std::cout << "float : Literal is bigger than FLT_MAX, that is "<< FLT_MAX <<  std::endl;
    // else if (std::strtol(&nb->stringValue[0], &pEnd, tmp) < FLT_MIN)
    //     std::cout << "float : Literal is smaller than FLT_TRUE_MIN : " << FLT_MIN_EXP << std::endl;
    else
        std::cout << "float : " << std::fixed << std::setprecision(5) << nb->floatValue << "f" << std::endl;
}

void    printDouble(t_nb *nb)
{
        std::cout << "double : " << nb->doubleValue << std::endl;

}

void    printValues(t_nb *nb)
{
    printChar(nb);
    printInt(nb);
    printFloat(nb);
    printDouble(nb);
}

void    convert(const char *input)
{
    t_nb	nb;
    char	*endf = NULL;
    char	*endd = NULL;

    nb.stringValue = input;
    nb.type = numberType(input);
    std::cout << "type detected : " << nb.type << std::endl;
    if (nb.type == "char")
    {
        nb.charValue = input[0];
        nb.intValue = static_cast<int>(nb.charValue);
        nb.floatValue = static_cast<float>(nb.intValue);
        nb.doubleValue = static_cast<double>(nb.floatValue);
        printValues(&nb);
    } 
    else if (nb.type == "float")
    {
        nb.floatValue = std::strtof(input, &endf);
        nb.intValue = static_cast<int>(nb.floatValue);
        nb.charValue = static_cast<char>(nb.intValue);
        nb.doubleValue = static_cast<double>(nb.floatValue);
        printValues(&nb);
    } 
    else if (nb.type == "double")
    {

        nb.doubleValue = std::strtod(input, &endd);
        nb.floatValue = static_cast<float>(nb.doubleValue);
        nb.intValue = static_cast<int>(nb.floatValue);
        nb.charValue = static_cast<char>(nb.intValue);
        printValues(&nb);
    }
    else if (nb.type == "int")
    {
        nb.intValue = std::stoi(input);
        nb.charValue = static_cast<char>(nb.intValue);
        nb.floatValue = static_cast<float>(nb.intValue);
        nb.doubleValue = static_cast<double>(nb.intValue);
        printValues(&nb);
    }
    else if (nb.type == "special")
    {
        float special;
        if (nb.stringValue == "nan" || nb.stringValue == "nanf")
			special = NAN;
		if (nb.stringValue == "inf" || nb.stringValue == "inff")
			special = INFINITY;
		if (nb.stringValue == "-inf" || nb.stringValue == "-inff")
			special = -INFINITY;
        std::cout << "char : impossible" << std::endl;
        std::cout << "int : impossible" << std::endl;
       nb.floatValue = static_cast<float>(special);
       nb.doubleValue = static_cast<double>(special);
        printFloat(&nb);
        printDouble(&nb);
    }
    else
        std::cout << "Not really a Literal..." << std::endl;
}