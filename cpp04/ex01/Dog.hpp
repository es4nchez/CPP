/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:44:34 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:44:36 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:

	Dog();
	Dog(const Dog &c);
	Dog & operator=( Dog const & c );
	~Dog();

private:
	Brain*	brain;
};

#endif
