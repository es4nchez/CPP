class Intern;

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class  Intern
{

public:

    Intern();
    Intern(const Intern &frm);
	Intern &operator=(const Intern &frm);
	~Intern();

    Form*   makeForm(std::string formName, std::string target);
    int     formNumber(std::string formName);

    typedef Form *(Intern::*formPtr)(const std::string);

    Form*	newShrubberyForm(const std::string target);
    Form*	newRobotomyForm(const std::string target);
    Form*	newPresidentialForm(const std::string target);

private:

    std::string    forms[3];
    formPtr        newForms[3];
};

#endif