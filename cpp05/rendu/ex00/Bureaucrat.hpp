#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

class  Bureaucrat
{

public:

	Bureaucrat();
	Bureaucrat(std::string named, int grade);
	Bureaucrat(const Bureaucrat &brc);
	Bureaucrat &operator=(const Bureaucrat &brc);
	~Bureaucrat();

    std::string getName() const;
	int	        getGrade() const;
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

std::ostream&	operator<<(std::ostream &out, const Bureaucrat& bureaucrat);



#endif
