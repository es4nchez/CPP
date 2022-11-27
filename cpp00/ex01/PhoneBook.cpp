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

PhoneBook::PhoneBook( void )
{
	this->ctsNb = -1;
	this->totalNb = 0;
	std::cout << "Phonebook created" << std::endl;

}

PhoneBook::~PhoneBook( void )
{

	std::cout << "Phonebook destroyed" << std::endl;

}

void	PhoneBook::newContact()
{
	std::string	data;

	this->ctsNb += 1;
	this->totalNb += 1;
	this->contacts[this->ctsNb].index = this->ctsNb;
	std::cout << "Please enter some data about the contact :" << "\n";
	std::cout << "First Name : ";
	std::cin >> data;
	this->contacts[this->ctsNb].firstName = data;
	std::cout << "Last Name : ";
	std::cin >> data;
	this->contacts[this->ctsNb].lastName = data;
	std::cout << "Nickname : ";
	std::cin >> data;
	this->contacts[this->ctsNb].nickName = data;
	std::cout << "Phone number : ";
	std::cin >> data;
	this->contacts[this->ctsNb].phoneNumber = data;
	std::cin.ignore(); // Have to use this after numerical values
	std::cout << "And the best, the darkest secret : ";
	std::getline(std::cin, data);
	this->contacts[this->ctsNb].darkestSecret = data;
	std::cout << std::endl;
	return ;
}

void	PhoneBook::printInfo( int nb )
{
	std::cout << "First Name \t: " << this->contacts[nb].firstName << std::endl;
	std::cout << "Last Name \t: " << this->contacts[nb].lastName << std::endl;
	std::cout << "Nickname \t: " << this->contacts[nb].nickName << std::endl;
	std::cout << "Phone number \t: " << this->contacts[nb].phoneNumber << std::endl;
	std::cout << "Darkest secret \t: " << this->contacts[nb].darkestSecret << std::endl << std::endl;
}

void	PhoneBook::printContact()
{
	std::string	data;
	int			selected;

	std::cout << std::endl << S_COL << S_VOID << S_IN << S_VOID << S_COL;
	for (int i=0; i < this->totalNb; i++)
	{
		std::cout << "|         " << i << "|";
		data = this->contacts[i].firstName;
		if (data.size() > 10)
		{
			data = data.insert(9, ".");
			data = data.substr(0, 10);
		}
		else
			std::cout << std::setw(10);
		std::cout << data;
		std::cout << "|";
		data = this->contacts[i].lastName;
		if (data.size() > 10)
		{
			data = data.insert(9, ".");
			data = data.substr(0, 10);
		}
		else
			std::cout << std::setw(10);
		std::cout << data;
		std::cout << "|";
		data = this->contacts[i].nickName;
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
	std::cin >> selected;
	while (selected < 0 || selected > this->totalNb - 1)
	{
		std::cout << "Not a valid number" << std::endl;
		std::cout << "Enter the index of the researched contact : " ;
		std::cin >> selected;
	}
	std::cout << "Number selected : " << selected << std::endl << std::endl;
	this->printInfo(selected);
}
