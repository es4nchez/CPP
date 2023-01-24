/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Array.hpp"

void    numbersTesting()
{
    Array<int> a(5); // create an array of 5 ints
    for (unsigned int i = 0; i < a.size(); ++i) {
        a[i] = i;
    }

    // Print the elements of the array
    for (unsigned int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    // Test copy constructor
    Array<int> b(a);
    b[0] = 100;
    std::cout << "Original Array: ";
    for (unsigned int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Copied Array: ";
    for (unsigned int i = 0; i < b.size(); ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    // Test assignment operator
    Array<int> c;
    c = a;
    c[0] = 200;
    std::cout << "Original Array: ";
    for (unsigned int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Assigned Array: ";
    for (unsigned int i = 0; i < c.size(); ++i) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    // Test out-of-bounds error
    try {
        Array<int> d(2);
        std::cout << d[3] << std::endl;
    } catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }
}

void    stringTesting()
{
    Array<std::string> a(3); 
    a[0] = "I'm a banana";
    a[1] = "Banana for scale !";
    a[2] = "Oh yeah !";


    for (unsigned int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    // Test copy
    Array<std::string> b(a);
    b[0] = "What are you ? ";
    std::cout << "Original Array: ";
    for (unsigned int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Copied Array: ";
    for (unsigned int i = 0; i < b.size(); ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    // Test assignment
    Array<std::string> c;
    c = a;
    c[0] = "Hello ";
    std::cout << "Original Array: ";
    for (unsigned int i = 0; i < a.size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Assigned Array: ";
    for (unsigned int i = 0; i < c.size(); ++i) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;

    // Test out-of-bounds error
    try {
        Array<std::string> d(2);
        std::cout << d[3] << std::endl;
    } catch (std::out_of_range& e) {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    numbersTesting();
    stringTesting();
    return 0;
}

