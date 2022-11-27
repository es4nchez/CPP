/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:46:35 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie( void ) {

	return;
}

Zombie::~Zombie( void ) {

	std::cout << "Zombie \"" << this->name << "\" destructed" << std::endl;
	return;
}


void	Zombie::named( std::string name) {

	this->name = name;

}

void	Zombie::announce( void ) {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

Zombie* zombieHorde( int N, std::string name ) {

	Zombie* newHorde = new Zombie[N];


	for(int z = 0; z < N; z++)
	{

		newHorde[z].named(name);
		std::cout << "Zombie No " << z <<  " created" << std::endl;
		newHorde[z].announce();

	}
	return(newHorde);
}







