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
	std::string	s1("George");
	std::string	s2("Henry");
	std::string s3("Scavocado");

	ClapTrap	george(s1);
	ClapTrap	henry(s2);
	ScavTrap	scavocado(s3);

	// Valid Tests
	henry.attack(s2);
	scavocado.attack(s1);
	george.takeDamage(4);
	scavocado.beRepaired(2);
	george.beRepaired(3);
	scavocado.guardGate();

	// Error Tests
//	henry.guardGate();
	return 0;
}
