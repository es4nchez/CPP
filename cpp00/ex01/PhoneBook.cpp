/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:04:36 by esanchez          #+#    #+#             */
/*   Updated: 2022/10/07 12:04:40 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>

PhoneBook::PhoneBook( void )
{
	this->_totalNb = 0;
	std::cout << "Phonebook created" << std::endl;

}

PhoneBook::~PhoneBook( void )
{

	std::cout << "Phonebook destroyed" << std::endl;

}

void	PhoneBook::newContact()
{

	std::string data;

	this->_totalNb += 1;
	std::cout << "Please enter some data about the contact :" << "\n";
	std::cout << "First Name : ";
	std::cin >> data;
	this->contacts[this->_totalNb % 8].setFirstName(data);
	std::cout << "Last Name : ";
	std::cin >> data;
	this->contacts[this->_totalNb % 8].setLastName(data);
	std::cout << "Nickname : ";
	std::cin >> data;
	this->contacts[this->_totalNb % 8].setNickName(data);
	std::cout << "Phone number : ";
	std::cin >> data;
	this->contacts[this->_totalNb % 8].setPhoneNumber(data);
	std::cin.ignore();
	std::cout << "And the best, the darkest secret : ";
	std::getline(std::cin, data);
	this->contacts[this->_totalNb % 8].setDarkestSecret(data);
	std::cout << std::endl;
	return ;
}

void	PhoneBook::printInfo( int nb )
{
	std::cout << "First Name \t: " << this->contacts[nb].getFirstName() << std::endl;
	std::cout << "Last Name \t: " << this->contacts[nb].getLastName() << std::endl;
	std::cout << "Nickname \t: " << this->contacts[nb].getNickName() << std::endl;
	std::cout << "Phone number \t: " << this->contacts[nb].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret \t: " << this->contacts[nb].getDarkestSecret() << std::endl << std::endl;
}

void	PhoneBook::printContact()
{
	std::string	data;
	std::string	selected;
	int	nb;

	std::cout << std::endl << S_COL << S_VOID << S_IN << S_VOID << S_COL;
	for (int i=0; i < std::min(this->_totalNb, 8); i++)
	{
		std::cout << "|         " << i << "|";
		data = this->contacts[i].getFirstName();
		if (data.size() > 10)
		{
			data = data.insert(9, ".");
			data = data.substr(0, 10);
		}
		else
			std::cout << std::setw(10);
		std::cout << data;
		std::cout << "|";
		data = this->contacts[i].getLastName();
		if (data.size() > 10)
		{
			data = data.insert(9, ".");
			data = data.substr(0, 10);
		}
		else
			std::cout << std::setw(10);
		std::cout << data;
		std::cout << "|";
		data = this->contacts[i].getNickName();
		if (data.size() > 10)
		{
			data = data.insert(9, ".");
			data = data.substr(0, 10);
		}
		else
			std::cout << std::setw(10);
		std::cout << data;
		std::cout << "|" << std::endl;
		std::cout << S_SEP;
	}
	std::cout << "\nEnter the index of the researched contact : " ;
	std::getline(std::cin, selected);
	nb = std::atoi(selected.c_str());
	while (nb < 0 || nb > std::min(this->_totalNb - 1, 8))
	{
		std::cout << "Not a valid number" << std::endl;
		std::cout << "Enter the index of the researched contact : " ;
		std::getline(std::cin, selected);
		nb = std::atoi(selected.c_str());
	}
	std::cout << "Number selected : " << nb << std::endl << std::endl;
	this->printInfo(nb);
}
