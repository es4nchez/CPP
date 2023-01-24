#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target): Form("PresidentialPardonForm", false, 25, 5), target(target) { std::cout << "Pres creation" << std::endl;}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &frm) {(*this) = frm;}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &frm) 
{
	if (this != &frm)
	{   
        this->sign = frm.sign;
        this->gradeToSign = frm.gradeToSign;
		this->gradeToExecute = frm.gradeToExecute;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void    PresidentialPardonForm::formAction() const
{
    std::cout << target << " has been pardon by Zaphod Beeblebrox" << std::endl;
}