class Form;

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Bureaucrat.hpp"

class  Form
{

public:

    Form();
	Form(std::string named, bool sign, int gradeToSign, int gradeToExecute);
    Form(const Form &frm);
	Form &operator=(const Form &frm);
	~Form();

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void            beSigned(const Bureaucrat& bureaucrat);
    void            execute(Bureaucrat const & executor) const;
    virtual void    formAction() const;    

    class GradeTooHighException: public std::exception {
			const char*	what() const throw();
		};
    class GradeTooLowException: public std::exception {
			const char*	what() const throw();
		};
    class UnsignedException: public std::exception {
        const char*	what()  const throw();
        };
    

protected:

    std::string const name;
    bool        sign;
    int         gradeToSign;
    int         gradeToExecute;

};

std::ostream&	operator<<(std::ostream &out, const Form& form);

#endif