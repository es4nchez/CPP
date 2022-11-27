/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:17:35 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:17:37 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &theWeapon ) :  weapon(theWeapon)
{
	this->name = name;
//	this->weapon = Weapon;
	return;
}

HumanA::~HumanA( void )
{
	return;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return;
}

void	HumanA::setWeapon( Weapon &Weapon)
{
	this->weapon = Weapon;
	return;
}
