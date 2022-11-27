/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:45:52 by esanchez          #+#    #+#             */
/*   Updated: 2022/04/05 23:45:55 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class	Contact {

public:

	int				index;
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string		phoneNumber;
	std::string		darkestSecret;

	Contact( void );
	~Contact( void );

};

#endif
