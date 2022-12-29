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

	int operator>(const Fixed& other) const;
  	int operator<(const Fixed& other) const ;
	int operator>=(const Fixed& other);
	int operator<=(const Fixed& other);
	int operator==(const Fixed& other);
	int operator!=(const Fixed& other);


	Fixed& operator++();
	Fixed operator++(int);

	Fixed& operator--();
	Fixed operator--(int);

	Fixed operator+(const Fixed& value) const;
	Fixed operator-(const Fixed& value) const;
	Fixed operator*(const Fixed& value) const;
	Fixed operator/(const Fixed& value) const;

	static Fixed & min(Fixed & a, Fixed & b );
	static Fixed & max(Fixed & a, Fixed & b );
	static const Fixed & min(const Fixed & a, const Fixed & b );
	static const Fixed & max(const Fixed & a, const Fixed & b );

private:

	int	value;
	static int const bits;
};


std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif
