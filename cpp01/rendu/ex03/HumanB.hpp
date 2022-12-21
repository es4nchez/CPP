/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:17:25 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:17:27 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

public:

	HumanB( std::string name );
	~HumanB( void );
	void	attack( void );
	void	setWeapon( Weapon  &Weapon);

private:

	std::string		name;
	Weapon			*weapon;

};

#endif
