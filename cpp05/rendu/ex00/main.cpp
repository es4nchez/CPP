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


int main( void )
{
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	b1("Henry", 50);
			std::cout << b1 << std::endl;
			Bureaucrat	b2("Josef", -10);
			std::cout << b2 << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		Bureaucrat	b3("Marvin", 5);
		std::cout << b3 << std::endl;
		Bureaucrat	b4("Romeo", 56);
		std::cout << b4 << std::endl;
		std::cout << std::endl;

		try
		{
			b3.incrementGrade(5);
			std::cout << b3 << std::endl;
			b3.incrementGrade(420);
			std::cout << b3 << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << std::endl;

		try
		{
			b4.decrementGrade(10);
			std::cout << b4 << std::endl;
			b4.decrementGrade(700);
			std::cout << b4 << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	{
		Bureaucrat b5("Thierry", 42);
		std::cout << b5 << std::endl;
		Bureaucrat  b6 = b5;
		std::cout << b6 << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
