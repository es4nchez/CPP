#include <fstream>
#include <iostream>
#include "RPN.hpp"

int main(int ac, char **av)
{
    RPN db;

    if (ac != 2)
    {
        std::cerr << "Usage: " << av[0] << " <RPN expression>" << std::endl;
        return 1;
    }
    if (db.calculateRPN(av[1]))
        return(1);
    return (0);
}