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

Fixed::Fixed( void )
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & c)
{
	*this = c;
	std::cout << "Copy constructor called" << std::endl;
	return;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits called" << std::endl;
	this->value = raw;
	return ;
}

Fixed & Fixed::operator=( Fixed const & r )
{
	std::cout << "Assignation operator called" << std::endl;
    if ( this != &r )
        this->value = r.getRawBits();
    return *this;
}
 
int const Fixed::bits = 8;
