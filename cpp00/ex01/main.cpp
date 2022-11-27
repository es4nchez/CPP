/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:32:11 by esanchez          #+#    #+#             */
/*   Updated: 2022/04/04 20:32:13 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main()
{
	std::string cmd;
	PhoneBook	phonebook;

	std::cout << START << std::endl;
	std::cout << COMMANDS;

	std::cout << "\nEnter the command : ";
	while(std::getline(std::cin, cmd))
	{
		if (cmd == "EXIT")
			return (0);
		else if (cmd == "ADD")
			phonebook.newContact();
		else if (cmd == "SEARCH")
			phonebook.printContact();
		else
			std::cout << "\n-----------------\nCommand not recognize, please enter a valid command\n\n";
		std::cout << COMMANDS;
		std::cout << "\nEnter the command : ";
	}
}
