#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

template <class T>
class Array
{
    private :
        T*                _array;
        unsigned int    _size;

    public:
        Array(void);
        Array(unsigned int size);
        Array(const Array &cpy);
        Array& operator=(const Array &cpy);
        Array& operator[](const Array &cpy);
        ~Array();

        unsigned int    array_len();

        class            InvalidIndexAccess : public std::exception
        {
            const char* what() const throw();
        };
};

#endif`