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
#include <string>
#include <iostream>
#include <fstream>

int main( void )
{
	std::cout << std::endl;

	ClapTrap	george("George");
	ClapTrap	henry("Henry");
	ScavTrap	scavocado("Scavocado");

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
	scavocado.guardGate();
	scavocado.guardGate();

	// Error Tests
//	henry.guardGate();
	return 0;
}
