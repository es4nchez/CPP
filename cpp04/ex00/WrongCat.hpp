/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:44:34 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:44:36 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

	WrongCat();
	WrongCat(const WrongCat &c);
	WrongCat & operator=( WrongCat const & a );
	~WrongCat();

};

#endif
