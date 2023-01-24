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
#include "easyfind.hpp"


int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    try
    {
        int result = easyfind(v, 3);
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

    std::list<int> l = {10, 20, 30, 40, 50};
    try
    {
        int result = easyfind(l, 30);
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

