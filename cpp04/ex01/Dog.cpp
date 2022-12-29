/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->sound = "Wouaaf";
	this->brain = new Brain();
	std::cout << "The Dog is alive" << std::endl;
}

Dog::Dog(const Dog &a)
{
	*this = a;
	std::cout << "CopyDog constructor called" << std::endl;
	return;
}

Dog & Dog::operator=( Dog const & a )
{
    if ( this != &a )
	{
        this->type = a.type;
		this->sound = a.sound;
		this->brain = a.brain;
	}
	std::cout << "CopyDog Assignement called" << std::endl;
    return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "The Dog is dead :(" << std::endl;
}
