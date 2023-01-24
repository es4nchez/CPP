#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>


template< typename T >

void iter(T *array, int size, void (*ft)(T))
{
    for (int i = 0; i < size; i++)
    {
        ft(array[i]);
    }
}


#endif
