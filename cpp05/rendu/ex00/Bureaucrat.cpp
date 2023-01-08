#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade) 
{
    if (grade < 0)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
   // std::cout << "A bureaucrat named "<< name << ", and level " << grade << " is born" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &brc) 
{
	std::cout << "copy" << std::endl;
	(*this) = brc;
}

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
    if (this->grade - incr  < 0)
        throw GradeTooHighException();
    if (this->grade - incr > 150)
        throw GradeTooLowException();
    this->grade -= incr;
    std::cout << "Level of " << this->name << " is now " << this->grade << std::endl;
}

void    Bureaucrat::decrementGrade(int decr)
{
    if (this->grade + decr  < 0)
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

Bureaucrat&	Bureaucrat::operator =(Bureaucrat& other) {
	if (this != &other)
		grade = other.grade;
	return *this;
}

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat of grade " << bureaucrat.getGrade();
	return out;
}