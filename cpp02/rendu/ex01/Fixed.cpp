/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &c)
{
	*this = c;
	std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int value)
{
	this->value = value << this->bits;
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << this->bits));
	std::cout << "Float constructor called" << std::endl;
	return;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
	return ;
}

Fixed & Fixed::operator=( Fixed const & r )
{
	std::cout << "Copy Assignement called" << std::endl;
    if ( this != &r )
        this->value = r.getRawBits();
    return *this;
}

int		Fixed::toInt(void) const
{

	return (this->value >> this->bits);
}

float	Fixed::toFloat(void) const
{

	return ((float)this->value / ( 1 << this->bits));
}

std::ostream& operator <<(std::ostream& out, const Fixed& nb)
{
	out << nb.toFloat();
	return (out);
}


int const Fixed::bits = 8;
