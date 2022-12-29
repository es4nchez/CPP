/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string nameGiven)
{
	this->name = nameGiven;
	this->hitPts = 10;
	this->enyPts = 10;
	this->attDmg = 0;
	std::cout << name << " is alive" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	*this = c;
	std::cout << "Copy constructor called" << std::endl;
	return;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & r )
{
    if ( this != &r )
	{
        this->name = r.name;
		this->hitPts = r.hitPts;
		this->enyPts = r.enyPts;
		this->attDmg = r.attDmg;
	}
	std::cout << "Copy Assignement called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " is dead" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->enyPts == 0 || this->hitPts == 0 )
	{
		std::cout << this->name << " hasn't energy or health anymore, let him rest a bit !" << std::endl;
		return ;
	}
	this->enyPts -= 1;
	std::cout << this->name << " attack " << target << " for " << this->attDmg << " damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " take " << amount << " damage !" << std::endl;
	this->hitPts -= amount;
	std::cout << this->name << " is now at " << this->hitPts << " health points !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->enyPts == 0 || this->hitPts == 0 )
	{
		std::cout << this->name << " hasn't energy or health anymore, let him rest a bit !" << std::endl;
		return ;
	}
	this->enyPts -= 1;
	std::cout << name << " repairing " << amount << " health points !" << std::endl;
	this->hitPts += amount;
	std::cout << name << " is now at " << this->hitPts << " health points !" << std::endl;
}
