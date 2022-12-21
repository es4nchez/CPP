#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

class  Bureaucrat
{

public:

	Bureaucrat(std::string named, int grade);
	~Bureaucrat();

    std::string getName();
	int	        getGrade();
    void        incrementGrade(int incr);
    void        decrementGrade(int decr);

    class GradeTooHighException: public std::exception {
			const char*	what() const throw();
		};
    class GradeTooLowException: public std::exception {
			const char*	what() const throw();
		};
	
    Bureaucrat&	operator =(Bureaucrat& other);

private:

	const std::string	name;
	int                 grade;
};

std::ostream&	operator<<(std::ostream &cout, const Bureaucrat& bureaucrat);


#endif
