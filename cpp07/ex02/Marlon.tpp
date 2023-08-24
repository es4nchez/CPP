#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _size = 0
{
    this->_array = new T[_size];
}

template <typename  T>
Array<T>::Array(unsigned int size) : _size(size)
{
    this->_array = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &cpy) : _size(copy._size)
{
    _array = NULL;
    *this = cpy;
}

template <typename T>
Array<T>&    Array<T>::operator=(const Array &cpy)
{
    if(this == &cpy)
        return (*this);
    if (this->_size > 0)    
        delete[] _array;
    this->_size = cpy._size;
    this->_array = new T[this->_size];
    for (int i = 0; i < this->_size; i++)
        this->_array[i] = cpy._array[i];
    return (*this);
}

template <typename T>
Array<T>& Array<T>::operator[](const Array &index)
{
    if (index >= this->_size)
        throw InvalidIndexAccess();
    return this->_array[index];
}

template <typename T>
Array<T>::~Array()
{
    if (this->_size)
        delete[] _array;
}

template <typename T>
unsigned int    Array<T>::array_len()
{
    return this->_size;
}

template <typename T>
const char* Array<T>::InvalidIndexAccess::what() const throw()
{
    return ("! The access of this index is invalid !");
}