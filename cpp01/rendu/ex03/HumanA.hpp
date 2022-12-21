/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*             	                                      +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:17:25 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:17:27 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

public:

	HumanA( std::string name, Weapon &theWeapon );
	~HumanA( void );
	void	attack( void );
	void	setWeapon(Weapon &Weapon);

private:

	std::string		name;
	Weapon			&weapon;

};

#endif
