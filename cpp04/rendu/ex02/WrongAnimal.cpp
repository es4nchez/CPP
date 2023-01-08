/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "wrong_animal";
	this->sound = "???";
	std::cout << "A wrong animal is alive" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	*this = a;
	std::cout << "CopyWrong constructor called" << std::endl;
	return;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & a )
{
    if ( this != &a )
	{
        this->type = a.type;
		this->sound = a.sound;
	}
	std::cout << "CopyWrong Assignement called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "A wrong animal is dead" << std::endl;
}

void	WrongAnimal::makeSound() const
{

	std::cout << "The " << this->type << " : " << this->sound << std::endl;

}
