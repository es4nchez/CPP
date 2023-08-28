#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
    Bitcoin btc;
    std::ifstream file;

    file.open(av[1]);
    if (ac != 2 || !file)
    {
        std::cout << std::endl << "Error: could not open file." << std::endl;
        return (0);
    }
    file.close();
    btc.loadDatabase();
    btc.loadFile(av[1]);
    return (0);
}