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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main( void )
{
	{
		Bureaucrat				b1("Fred", 1);
		Bureaucrat				b2("Georges", 60);
		Bureaucrat				b3("Alfred", 150);
		ShrubberyCreationForm	f1("Garden");
		RobotomyRequestForm		f2("Henry");
		PresidentialPardonForm	f3("Zaphod");
		PresidentialPardonForm	f4("Humma Kavula");

		b3.signForm(f1);
		b2.signForm(f1);

		b2.signForm(f2);
		b1.signForm(f2);

		b2.signForm(f3);
		b1.signForm(f3);

		std::cout << std::endl;

		b3.executeForm(f1);
		b2.executeForm(f1);

		b2.executeForm(f2);
		b1.executeForm(f2);

		b2.executeForm(f3);
		b1.executeForm(f3);
		b1.executeForm(f4);
		std::cout << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat				b1("Fred", 1);
	Intern	filip;
	Form* rrf1;
	
	rrf1 = filip.makeForm("ShrubberyCreationForm", "test2");


	b1.signForm(*rrf1);

	delete rrf1;
	

}
