#include "Form.hpp"

Form::Form(std::string name, bool sign, int gradeToSign, int gradeToExecute): name(name), sign(sign), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) 
{
    if (gradeToSign < 0 || gradeToExecute < 0)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
   
}

Form::~Form()
{

   
}

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSigned() const
{
    return (this->sign);
}

int Form::getGradeToSign() const
{
    return (this->gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (this->gradeToExecute);
}

const char*	   Form::GradeTooHighException::what()  const throw()
{
    return "Grade too high !";
}

const char*	   Form::GradeTooLowException::what()  const throw()
{
    return "Grade too low !";
}

void    Form::beSigned(const Bureaucrat& bureaucrat) {

    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    else
    {
        if (!this->sign)
            this->sign = true;
    }
}

std::ostream&	operator<<(std::ostream &out, const Form& form) {
	out << form.getName() << " form, grade " << form.getGradeToSign() << " to sign, grade " << form.getGradeToExecute() << " to execute. Signed : " << form.getSigned();
	return out;
}