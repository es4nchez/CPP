/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{

	return;
}

Harl::~Harl( void )
{

	return;
}

void	Harl::debug(void)
{


	std::cout << "[DEBUG]\t Wesh tout va bien, c'est les logs" << std::endl;
}

void	Harl::info(void)
{


	std::cout << "[INFO]\t Tiens, voici quelques infos" << std::endl;
}

void	Harl::warning(void)
{


	std::cout << "[WARNING] Fais gaffe la, y'a un truc bizzare" << std::endl;
}

void	Harl::error(void)
{


	std::cout << "[ERROR} T'as des erreurs partout, ca compile pas" << std::endl;
}

void	Harl::complain( std::string level )
{

	int i = 0;

	void (Harl::*functions[]) (void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
		i++;
	}
}


