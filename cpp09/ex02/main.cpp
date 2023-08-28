#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <ctime>
#include "PmergeMe.hpp"
#include <time.h>


int main(int argc, char** argv)
{
    PmergeMe Pme;
    clock_t start, end;
    double  listTime, vectorTime;
    bool printAll = true;

    if (argc < 2)
    {
        std::cerr << "Usage: " << argv[0] << " <integer_sequence>" << std::endl;
        return 1;
    }


    for (int i = 1; i < argc; ++i)
    {
        int n = atoi(argv[i]);
        Pme.v.push_back(n);
        Pme.l.push_back(n);
    }
    
    std::cout << "Before: ";
    // Pme.printList(Pme.l, printAll);
    Pme.printVector(Pme.v, printAll);
    
    int size = Pme.l.size();
    start = clock();
    Pme.sortList(Pme.l, size);
    end = clock();
    listTime = (double)(end - start) / CLOCKS_PER_SEC * 1000000;

    start = clock();
    Pme.sortVector(Pme.v, size);
    end = clock();
    vectorTime = (double)(end - start) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After:  ";
    // Pme.printList(Pme.l, printAll);
    Pme.printVector(Pme.v, printAll);

    std::cout << "Time to process a range of " << size << " elements with std::list   : " << listTime << " us" << std::endl;
    std::cout << "Time to process a range of " << size << " elements with std::vector : " << vectorTime << " us" << std::endl;
    std::cout << "Speed ratio (list/vector): " << (listTime / vectorTime) << std::endl;

    return 0;
}