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
#include "Brain.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->sound = "Miiaaouuuu";
	this->brain = new Brain();
	std::cout << "The cat is alive" << std::endl;
}

Cat::Cat(const Cat &a)
{
//	this->brain = NULL;
	*this = a;
	std::cout << "CopyCat constructor called" << std::endl;
	return;
}

Cat & Cat::operator=( Cat const & a )
{
    this->type = a.type;
//	if (this->brain)
//		delete (this->brain);
//	this->brain = new Brain();
	delete this->brain;
    this->brain = new Brain(*a.brain);
//	this->brain->operator=(*a.brain);
	std::cout << "CopyCat Assignement called" << std::endl;
    return *this;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "The cat is dead :(" << std::endl;
}
