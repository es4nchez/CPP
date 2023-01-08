/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	this->sound = "Meuuuuuhhh";
	std::cout << "The wrong cat is alive" << std::endl;
}

WrongCat::WrongCat(const WrongCat &a)
{
	*this = a;
	std::cout << "CopyWrongCat constructor called" << std::endl;
	return;
}

WrongCat & WrongCat::operator=( WrongCat const & a )
{
    if ( this != &a )
	{
        this->type = a.type;
		this->sound = a.sound;
	}
	std::cout << "CopyWrongCat Assignement called" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "The wrong cat is dead :(" << std::endl;
}
