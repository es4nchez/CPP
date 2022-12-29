/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "animal";
	this->sound = "???";
	std::cout << "An animal is alive" << std::endl;
}

Animal::Animal(const Animal &a)
{
	*this = a;
	std::cout << "Copy constructor called" << std::endl;
	return;
}

Animal & Animal::operator=( Animal const & a )
{
    if ( this != &a )
	{
        this->type = a.type;
		this->sound = a.sound;
	}
	std::cout << "Copy Assignement called" << std::endl;
    return *this;
}

Animal::~Animal()
{
	std::cout << "An animal is dead" << std::endl;
}

void	Animal::makeSound() const
{

	std::cout << "The " << this->type << " : " << this->sound << std::endl;

}
