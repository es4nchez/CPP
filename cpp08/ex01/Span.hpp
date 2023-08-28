class Span;

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <vector>

class  Span
{

public:

    Span();
	Span(unsigned int nb);
	Span(const Span &spn);
	Span &operator=(const Span &spn);
	~Span();


	void    addNumber(int nb);
	void    printSpan();
	int		shortestSpan();
	int		longestSpan();
	void	spamRandom();

    class GradeTooHighException: public std::exception {
			const char*	what() const throw();
		};
    class GradeTooLowException: public std::exception {
			const char*	what() const throw();
		};
	

private:

	std::vector<int> span;

};



#endif