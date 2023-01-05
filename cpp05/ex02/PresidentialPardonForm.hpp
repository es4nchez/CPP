
class PresidentialPardonForm;

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class  PresidentialPardonForm : public Form
{

public:

    PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &brc);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &brc);
	~PresidentialPardonForm();
    
    void    formAction() const;
    void    beSigned(const Bureaucrat& bureaucrat);
    
private:

    std::string target;
};

#endif