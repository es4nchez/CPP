/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() 
{
	this->name = "GenericScav";
	this->hitPts = 100;
	this->enyPts = 50;
	this->attDmg = 20;
	this->guardGateMode = false;
	std::cout << name << " is alive (now a ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap( std::string nameGiven) : ClapTrap( nameGiven)
{
	this->name = nameGiven;
	this->hitPts = 100;
	this->enyPts = 50;
	this->attDmg = 20;
	std::cout << name << " is alive (now a ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scv) : ClapTrap(scv)
{
	std::cout << "ScavTrap Copy" << std::endl;
	(*this) = scv;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
	std::cout << "ScavTrap operator= called" << std::endl;
	if (&scav != this)
		this->ClapTrap::operator=(scav);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " the Scav is dead" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->enyPts == 0 || this->hitPts == 0 )
	{
		std::cout << this->name << " the Scav hasn't energy or health anymore, let him rest a bit !" << std::endl;
		return ;
	}
	this->enyPts -= 1;
	std::cout << this->name << " the Scav wildly attack " << target << " for " << this->attDmg << " damage !" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->guardGateMode)
		std::cout << this->name << " is already in Gate Keeper Mode !" << std::endl;
	else
	{
		this->guardGateMode = true;
		std::cout << this->name << " is now in Gate Keeper Mode ! Brace yourself !" << std::endl;
	}

}
