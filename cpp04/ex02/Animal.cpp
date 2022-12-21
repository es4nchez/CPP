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

Animal::~Animal()
{
	std::cout << "An animal is dead" << std::endl;
}

void	Animal::makeSound() const
{

	std::cout << "The " << this->type << " : " << this->sound << std::endl;

}