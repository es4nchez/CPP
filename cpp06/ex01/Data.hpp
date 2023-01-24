#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

typedef struct {
    int x;
    float y;
    char z;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


#endif