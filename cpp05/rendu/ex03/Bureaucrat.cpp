#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade) 
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &brc) {(*this) = brc;}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &brc) 
{
	if (this != &brc)
	{
		this->grade = brc.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat() {std::cout << "A bureaucrat named " << this->name << " is dead" << std::endl;}

void    Bureaucrat::incrementGrade(int incr)
{
    if (this->grade - incr  < 1)
        throw GradeTooHighException();
    if (this->grade - incr > 150)
        throw GradeTooLowException();
    this->grade -= incr;
    std::cout << "Level of " << this->name << " is now " << this->grade << std::endl;
}

void    Bureaucrat::decrementGrade(int decr)
{
    if (this->grade + decr  < 1)
        throw GradeTooHighException();
    if (this->grade + decr > 150)
        throw GradeTooLowException();
    this->grade += decr;
    std::cout << "Level of " << this->name << " is now " << this->grade << std::endl;
}

std::string Bureaucrat::getName() const {return (this->name);}

int Bureaucrat::getGrade() const {return(this->grade);}

const char*	   Bureaucrat::GradeTooHighException::what()  const throw() {return "Grade too high !";}

const char*	   Bureaucrat::GradeTooLowException::what()  const throw() {return "Grade too low !";}

Bureaucrat&	Bureaucrat::operator =(Bureaucrat& other)
{
	if (this != &other)
		grade = other.grade;
	return *this;
}

void    Bureaucrat::signForm(Form& form)
{

    try
    {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception & e) 
    {
        std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
   
}

void    Bureaucrat::executeForm(Form const & form)
{

    try
    {;
        form.execute(*this);;
        std::cout << this->name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception & e) 
    {
        std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
   
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat of grade " << bureaucrat.getGrade();
	return out;
}