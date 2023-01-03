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
	std::cout << "The Dog is alive" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &a)
{
	brain = NULL;
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
		if (this->brain)
			delete this->brain;
		this->brain = new Brain;
		this->brain->operator=(*a.brain);
		// this->brain = a.brain;
	}
	std::cout << "CopyDog Assignement called" << std::endl;
    return *this;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "The Dog is dead :(" << std::endl;
}
