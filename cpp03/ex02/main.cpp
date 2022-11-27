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
	std::string	s1("George");
	std::string	s2("Henry");
	std::string s3("Scavocado");
	std::string	s4("Fragboy");

	ClapTrap	george(s1);
	ClapTrap	henry(s2);
	ScavTrap	scavocado(s3);
	FragTrap	fragboy(s4);

	// Valid Tests
	henry.attack(s1);
	scavocado.attack(s1);
	george.takeDamage(4);
	fragboy.attack(s3);
	scavocado.beRepaired(2);
	fragboy.beRepaired(42);
	george.beRepaired(3);
	scavocado.guardGate();
	fragboy.highFivesGuys();

	// Error Tests
//	henry.guardGate();
	return 0;
}
