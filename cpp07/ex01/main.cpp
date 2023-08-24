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
#include "Iter.hpp"

void    enumerate(int const &number)
{
    std::cout << "This is number " << number << " !" << std::endl;
}

void    enumerateBis(std::string const &name)
{
    std::cout << "My name is " << name << " !" << std::endl;
}

int main( void )
{
    int numbers[5] = {1, 2, 3, 4, 5};
    std::string names[5] = {"Tom", "Jerry", "Henry", "Bernadette", "Francis"};

    iter(numbers, 5, enumerate);
    iter(names, 5, enumerateBis);

    return 0;
}
