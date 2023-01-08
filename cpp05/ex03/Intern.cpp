#include "Intern.hpp"

Intern::Intern()
{
    forms[0] = std::string("ShrubberyCreationForm");
    forms[1] = std::string("RobotomyRequestForm");
    forms[2] = std::string("PresidentialPardonForm");

    newForms[0] = &Intern::newShrubberyForm;
    newForms[1] = &Intern::newRobotomyForm;
    newForms[2] = &Intern::newPresidentialForm;
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



Form*	Intern::newShrubberyForm(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::newRobotomyForm(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::newPresidentialForm(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

int     Intern::formNumber(std::string formName)
{
    for (int nb = 0 ; nb < 3; nb++)
    {
        if (formName == forms[nb])
            return nb;
    }
    return -1;
}

Form*   Intern::makeForm(std::string formName, std::string target)
{
    if (formNumber(formName) == -1)
    {
        std::cout << "Form " << formName << " Not Found" << std::endl;
        return NULL;
    }
    std::cout << "Intern creates " << formName << std::endl;
    return (this->*newForms[formNumber(formName)])(target);
}