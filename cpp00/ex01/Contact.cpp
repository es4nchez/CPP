/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:04:48 by esanchez          #+#    #+#             */
/*   Updated: 2022/10/07 12:04:51 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact( void )
{
//	std::cout << "Contact destroyed" << std::endl;

}

std::string Contact::getFirstName() const
{
    return (_firstName);
}

std::string Contact::getLastName() const
{
    return (_lastName);
}

std::string Contact::getNickName() const
{
    return (_nickName);
}

std::string Contact::getPhoneNumber() const
{
    return (_phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
    return (_darkestSecret);
}

void    Contact::setFirstName(std::string str)
{
    _firstName = str;
}

void    Contact::setLastName(std::string str)
{
    _lastName = str;
}

void    Contact::setNickName(std::string str)
{
    _nickName = str;
}

void    Contact::setPhoneNumber(std::string str)
{
    _phoneNumber = str;
}

void    Contact::setDarkestSecret(std::string str)
{
    _darkestSecret = str;
}