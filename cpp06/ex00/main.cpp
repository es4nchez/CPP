#include <iostream>
#include <fstream>
#include "Scalar.hpp"


int main(int ac, char **av)
{
	if (ac == 1 || ac > 2)
	{
		std::cout << "This program must take arguments" << std::endl;
		return (1);
	}
	numbering(av[1]);
	return 0;
}
