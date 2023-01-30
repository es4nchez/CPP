#include <iostream>
#include <fstream>
#include "Convert.hpp"


int main(int ac, char **av)
// int	main()
{
	if (ac != 2) {
        std::cout << "Usage: ./casting <literal>" << std::endl;
        return 1;
    }
	convert(av[1]);

	// std::cout << std::endl << "Testing \"0\" : " << std::endl;
	// convert("0");

	// std::cout << std::endl << "Testing \"B\" : " << std::endl;
	// convert("B");

	// std::cout << std::endl << "Testing \"nan\" :" << std::endl;
	// convert("nan");

	// std::cout << std::endl << "Testing \"inf\" :" << std::endl;
	// convert("inf");

	// std::cout << std::endl << "Testing \"inff\" :" << std::endl;
	// convert("inff");

	// std::cout << std::endl << "Testing \"-inf\" :" << std::endl;
	// convert("inf");

	// std::cout << std::endl << "Testing \"42.0f\" :" << std::endl;
	// convert("42.0f");

	// std::cout << std::endl << "Testing \"42.0\" :" << std::endl;
	// convert("42.0");

	// std::cout << std::endl << "Testing \"42.5\" :" << std::endl;
	// convert("42.5");

	// std::cout << std::endl << "Testing \"42\" :" << std::endl;
	// convert("42");

	// std::cout << std::endl << "Testing \"-42\" :" << std::endl;
	// convert("-42");

	// std::cout << std::endl << "Testing \"3.45\" :" << std::endl;
	// convert("3.45");

	// std::cout << std::endl << "Testing \"46151051215412\" :" << std::endl;
	// convert("46151051215412");

	// std::cout << std::endl << "Testing \"-46151051215412\" :" << std::endl;
	// convert("-46151051215412");

	// std::cout << std::endl << "Testing \"2222222222222222222222222\" :" << std::endl;
	// convert("2222222222222222222222222");

	// std::cout << std::endl << "Testing \"f\" :" << std::endl;
	// convert("f");

	// std::cout << std::endl << "Testing \"1A1\" :" << std::endl;
	// convert("1A1");

	return 0;
}
