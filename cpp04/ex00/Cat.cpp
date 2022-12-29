/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->sound = "Miiaaouuuu";
	std::cout << "The cat is alive" << std::endl;
}

Cat::Cat(const Cat &a)
{
	*this = a;
	std::cout << "CopyCat constructor called" << std::endl;
	return;
}

Cat & Cat::operator=( Cat const & a )
{
    if ( this != &a )
	{
        this->type = a.type;
		this->sound = a.sound;
	}
	std::cout << "CopyCat Assignement called" << std::endl;
    return *this;
}

Cat::~Cat()
{
	std::cout << "The cat is dead :(" << std::endl;
}
