/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:36:40 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:36:43 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie*		horde;
	int			nbZombie;
	std::string name;

	std::cout << "\nName of zombie ? : ";
	std::cin >> name;
	std::cout << "And how many zombie to create ? : ";
	std::cin >> nbZombie;
	horde = zombieHorde( nbZombie, name);

	delete [] horde;
	return (0);
}
