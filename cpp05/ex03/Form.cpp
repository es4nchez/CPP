#include "Form.hpp"

Form::Form() {}

Form::Form(std::string name, bool sign, int gradeToSign, int gradeToExecute): name(name), sign(sign), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) 
{
    if (gradeToSign < 0 || gradeToExecute < 0)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
   
}

Form::Form(const Form &frm) {(*this) = frm;}

Form &Form::operator=(const Form &frm) 
{
	if (this != &frm)
	{   
        this->sign = frm.sign;
        this->gradeToSign = frm.gradeToSign;
		this->gradeToExecute = frm.gradeToExecute;
	}
	return (*this);
}

Form::~Form() {}

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

const char*	   Form::UnsignedException::what()  const throw()
{
    return "Form isnt signed !";
}

void    Form::beSigned(const Bureaucrat& bureaucrat)
{

    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    else
    {
        if (!this->sign)
            this->sign = true;
    }
}

void    Form::formAction() const{} ;

void    Form::execute(Bureaucrat const & executor) const
{
        if (executor.getGrade() > this->getGradeToExecute())
            throw GradeTooLowException();
        else if (!sign)
            throw UnsignedException();
        else
            this->formAction();
}

std::ostream&	operator<<(std::ostream &out, const Form& form) {
	out << form.getName() << " form, grade " << form.getGradeToSign() << " to sign, grade " << form.getGradeToExecute() << " to execute. Signed : " << form.getSigned();
	return out;
}