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

    struct Forms
    {
        std::string formName;
       
        int y;
    };

private:

    Forms   forms[3];
};

#endif