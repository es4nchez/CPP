/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:44:34 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:44:36 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

class Fixed
{

public:

	Fixed();
    Fixed(const Fixed&c);
    Fixed(const int value);
    Fixed(const float value);
	~Fixed();

    Fixed & operator=(const Fixed &r);
	int 	getRawBits() const;
	void	setRawBits( int const raw );
	int		toInt(void) const;
	float	toFloat(void) const;

private:

	int	value;
	static int const bits;
};


std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif
