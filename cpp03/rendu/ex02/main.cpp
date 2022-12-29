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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>
#include <fstream>

int main( void )
{
	std::cout << std::endl;

	ClapTrap	george("george");
	ClapTrap	henry("henry");
	ScavTrap	scavocado("scavocado");
	FragTrap	fragboy("fragboy");

	// Valid Tests
	henry.attack("george");
	george.takeDamage(0);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	george.beRepaired(1);
	scavocado.attack("George");
	george.takeDamage(20);
	fragboy.attack("scavocado");
	scavocado.takeDamage(30);
	scavocado.guardGate();
	scavocado.guardGate();
	fragboy.highFivesGuys();

	// Error Tests
//	henry.guardGate();
	return 0;
}
