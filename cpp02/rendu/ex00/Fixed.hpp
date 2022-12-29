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

class Fixed
{

public:

	Fixed( void );
	~Fixed( void );
    Fixed( Fixed const & c);
    Fixed & operator=( Fixed const & r );

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:

	int	value;
	static int const bits;
};


typedef struct s_message
{


}						t_message;

#endif
