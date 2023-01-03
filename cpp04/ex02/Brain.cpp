/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = "I have no idea what i'm doing";
	}
	std::cout << "An Brain is alive" << std::endl;
}

Brain::Brain(const Brain &a)
{
	*this = a;
	std::cout << "CopyBrain constructor called" << std::endl;
	return;
}

Brain & Brain::operator=( Brain const & a )
{
    if ( this != &a )
    {
 		for (int i = 0; i < 100; ++i)
		{
			ideas[i] = a.ideas[i];
		}
	}
	std::cout << "CopyBrain Assignement called" << std::endl;
    return *this;
}

Brain::~Brain()
{
	std::cout << "An Brain is dead" << std::endl;
}
