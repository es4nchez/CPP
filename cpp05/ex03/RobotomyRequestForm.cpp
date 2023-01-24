#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("RobotomyRequestForm", false, 72, 45), target(target) { std::cout << "Robotomy creation booy" << std::endl;}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &frm) {(*this) = frm;}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &frm) 
{
	if (this != &frm)
	{   
        this->sign = frm.sign;
        this->gradeToSign = frm.gradeToSign;
		this->gradeToExecute = frm.gradeToExecute;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void    RobotomyRequestForm::formAction() const
{
    std::time_t result = std::time(nullptr);

    std::cout << "BRrrrr...Zzzzrrr...Brrrzzzz" << std::endl;
    if (result % 2 == 0)
        std::cout << target << " has been robotomized successfully ! " << std::endl;
    else
        std::cout << target << " has failed to be robotomized..." << std::endl;
}