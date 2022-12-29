/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:44:34 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:44:36 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

	ScavTrap();
	ScavTrap( std::string nameGiven);
	ScavTrap(ScavTrap const &scav);
	ScavTrap &operator=(ScavTrap const &scav);
	~ScavTrap();

	void guardGate();
	void attack(const std::string& target);

private:

	bool guardGateMode;
};

#endif
