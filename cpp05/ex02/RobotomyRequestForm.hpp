
class RobotomyRequestForm;

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"


class  RobotomyRequestForm : public Form
{

public:

    RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &brc);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &brc);
	~RobotomyRequestForm();
    
    void    formAction() const;
    void    beSigned(const Bureaucrat& bureaucrat);
    
private:

    std::string target;
};

#endif