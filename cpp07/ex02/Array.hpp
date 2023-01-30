#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>


template <typename T>
class Array {
public:
    Array() : a_size(0), a_data(nullptr) {}
    Array(unsigned int n) : a_size(n), a_data(new T[n]()) {}
    ~Array() { delete[] a_data;}

    Array(const Array<T>& other) : a_size(other.a_size), a_data(new T[a_size]) {
        for (unsigned int i = 0; i < a_size; ++i) {
            a_data[i] = other.a_data[i];
        }
    }

    unsigned int size() const { return a_size; }

    Array<T>& operator=(const Array<T>& other)
    {
        if (this != &other)
        {
            delete[] a_data;
            a_size = other.a_size;
            a_data = new T[a_size];
            for (unsigned int i = 0; i < a_size; ++i)
                a_data[i] = other.a_data[i];
        }
        return *this;
    }

    T& operator[](unsigned int index) {
        if (index >= a_size) {
            throw std::out_of_range("Index out of range");
        }
        return a_data[index];
    }
    const T& operator[](unsigned int index) const {
        if (index >= a_size)
        {
            throw std::out_of_range("Index out of range");
        }
        return a_data[index];
    }

private:
    unsigned int a_size;
    T* a_data;
};

#endif