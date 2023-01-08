#include "Intern.hpp"

Intern::Intern()
{
    forms[0].formName = std::string("ShrubberyCreationForm");
    forms[1].formName = std::string("RobotomyRequestForm");
    forms[2].formName = std::string("PresidentialPardonForm");

    forms[0].formFunct = 
}

Intern::Intern(const Intern &frm)
{
    (*this) = frm;
}

Intern &Intern::operator=(const Intern &frm) 
{
    if (&frm != this)
        return (*this);
    return (*this);
}

Intern::~Intern() {}

Form*   Intern::makeForm(std::string formName, std::string target)
{
    for (int nb = 0 ; nb < 3; nb++)
    {
        std::cout << "test" << std::endl;
    }
    std::cout << "Intern creates " << formName << std::endl;
    return (new ShrubberyCreationForm(target));
}