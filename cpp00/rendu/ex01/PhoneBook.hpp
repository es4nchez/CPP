/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:20:18 by esanchez          #+#    #+#             */
/*   Updated: 2022/04/05 23:20:20 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <limits.h>
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

#define START "\n\tIts a Revolution !!!\n\nA few commands are available :\n"
#define COMMANDS "ADD\t: Add a new contact\nSEARCH\t: Search a contact\nEXIT\t: Exit the phonebook\n"
#define S_COL "*----------*----------*----------*----------*\n"
#define S_VOID "|          |          |          |          |\n"
#define S_IN "|     Index|First Name|  LastName|  Nickname|\n"
#define S_SEP "|----------|----------|----------|----------|\n"
class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	newContact();
	void	printContact();
	void	printInfo( int nb );

private:

	Contact contacts[8];
	int		_totalNb;
};

#endif
