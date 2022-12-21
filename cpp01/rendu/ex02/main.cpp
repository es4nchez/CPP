/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:36:40 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:36:43 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";

	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "\nString address   \t: " << &brain <<std::endl;
	std::cout << "stringPTR address\t: " << stringPTR <<std::endl;
	std::cout << "stringREF address\t: " << &stringREF <<std::endl;

	std::cout << "\nString value   \t\t: " << brain <<std::endl;
	std::cout << "StringPTR value\t\t: " << *stringPTR <<std::endl;
	std::cout << "StringREF value\t\t: " << stringREF <<std::endl;

	return (0);
}
