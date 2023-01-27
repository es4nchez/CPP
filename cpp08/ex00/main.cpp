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
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <string>
#include "easyfind.hpp"


int main()
{
    ////// Vector tests
    std::vector<int>    v;

    v.push_back(50);
    v.push_back(9);
    v.push_back(15);
    v.push_back(31);
    v.push_back(42);
    try
    {
        int result = easyfind(v, 31);
        std::cout << "Value found: " << result << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        int result = easyfind(v, 6);
        std::cout << "Value found: " << result << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cout << e.what() << std::endl;
    }

    ////// Lists tests
    std::list<int> l;

    l.push_back(14);
    l.push_back(33);
    l.push_back(8);
    l.push_back(42);
    l.push_back(16);
    l.push_back(88);
    try
    {
        int result = easyfind(l, 16);
        std::cout << "Value found: " << result << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        int result = easyfind(l, 60);
        std::cout << "Value found: " << result << std::endl;
    }
    catch (std::runtime_error& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

