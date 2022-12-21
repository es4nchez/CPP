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
	{try
	{
		Bureaucrat	b1("Henry", 50);
		Bureaucrat	b2("Josef", -10);
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}}

	Bureaucrat	b3("Marvin", 5);
	Bureaucrat	b4("Romeo", 56);
	std::cout << b3;

	try
	{
		b3.incrementGrade(42);
		b3.incrementGrade(420);
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		b4.decrementGrade(42);
		b4.decrementGrade(420);
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	Bureaucrat b5("Thierry", 42);
	//std::cout << b5;
	return 0;
}
