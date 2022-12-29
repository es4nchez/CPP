/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:46:33 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/13 10:18:02 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


int main( void )
{

	{try
	{
		Form	f1("\nInternship", false, 50, 12);
		Form	f2("Full time Job", true, 101, 42);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}}
	
	Form		f3("MoonInternship", true, 55, 12);
	Bureaucrat	b1("Fred", 51);

	std::cout << std::endl << f3 << std::endl;
	std::cout << b1 << std::endl;
	b1.signForm(f3);
	std::cout << f3 << std::endl;
}
