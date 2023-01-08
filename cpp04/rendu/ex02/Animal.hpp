/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:44:34 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:44:36 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

class  Animal
{

public:

	// Animal();
	// Animal(const Animal &c);
	virtual Animal & operator=( Animal const & a );
	virtual ~Animal();

	virtual void	makeSound() const;

protected:

	Animal();
	Animal(const Animal &c);

	std::string	type;
	std::string	sound;
};



#endif
