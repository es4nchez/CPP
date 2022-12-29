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
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &c)
{
	*this = c;
	//std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int value)
{
	this->value = value << this->bits;
	//std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float value)
{
	this->value = roundf(value * (1 << this->bits));
	//std::cout << "Float constructor called" << std::endl;
	return;
}

int		Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
	return ;
}

Fixed & Fixed::operator=( Fixed const & r )
{
	//std::cout << "Copy Assignement called" << std::endl;
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

int Fixed::operator>(const Fixed& value) const
{ 
	return this->value > value.value; 
}

int Fixed::operator<(const Fixed& value) const
{ 
	return this->value < value.value; 
}

int Fixed::operator>=(const Fixed& value)
{ 
	return this->value >= value.value;
}
int Fixed::operator<=(const Fixed& value)
{ 
	return this->value <= value.value;
}

int Fixed::operator==(const Fixed& value)
{ 
	return this->value == value.value;
}

int Fixed::operator!=(const Fixed& value)
{ 
	return this->value != value.value;
}

Fixed	Fixed::operator+(const Fixed &value) const
{
	Fixed	result(this->toFloat() + value.toFloat());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &value) const
{
	Fixed	result(this->toFloat() - value.toFloat());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &value) const
{
	Fixed	result(this->toFloat() * value.toFloat());
	return (result);
}

Fixed	Fixed::operator/(const Fixed &value) const
{
	Fixed	result(this->toFloat() / value.toFloat());
	return (result);
}


Fixed& Fixed::operator++()
{ 
	this->value += 1;
	return *this; 
} 

Fixed Fixed::operator++(int) 
{ 
	Fixed copy(*this); 
	++(*this);
	return copy;
}

Fixed& Fixed::operator--()
{ 
	this->value -= 1;
	return *this; 
} 

Fixed Fixed::operator--(int) 
{ 
	Fixed copy(*this); 
	--(*this);
	return copy;
}


const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	return a < b ? a : b;
}
	
const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	return a > b ? a : b;
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	return a < b ? a : b;
}
	
Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	return a > b ? a : b;
}


int const Fixed::bits = 8;

std::ostream& operator <<(std::ostream& out, const Fixed& nb)
{
	out << nb.toFloat();
	return (out);
}

