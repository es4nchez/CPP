#include "Span.hpp"

Span::Span(unsigned int nb)
{
    (void)nb;

}

Span::Span(const Span &spn) {(*this) = spn;}

Span &Span::operator=(const Span &spn) 
{
    (void)spn;
	return (*this);
}

Span::~Span() {}

void    Span::addNumber(int nb)
{

    
}
