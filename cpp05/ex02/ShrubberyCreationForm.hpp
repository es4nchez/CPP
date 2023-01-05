
class ShrubberyCreationForm;

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class  ShrubberyCreationForm : public Form
{

public:

    ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &brc);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &brc);
	~ShrubberyCreationForm();

    void    formAction() const;
    void    beSigned(const Bureaucrat& bureaucrat);
    
private:

    std::string target;
};

#endif