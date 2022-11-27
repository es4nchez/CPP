/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string nameGiven) : ClapTrap( nameGiven)
{
	this->name = nameGiven;
	this->hitPts = 100;
	this->enyPts = 100;
	this->attDmg = 30;
	std::cout << name << " is alive (now a FragTrap)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " the Frag is dead" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->enyPts == 0 || this->hitPts == 0 )
	{
		std::cout << this->name << " the Frag hasn't energy or health anymore, let him rest a bit !" << std::endl;
		return ;
	}
	this->enyPts -= 1;
	std::cout << this->name << " the Frag attack " << target << " for " << this->attDmg << " damage !" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{

	std::cout << this->name << " high fiving the bro's family !" << std::endl;

}
