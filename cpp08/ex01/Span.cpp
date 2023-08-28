#include "Span.hpp"

Span::Span(unsigned int nb)
{
    span.reserve(nb);

}

Span::Span(const Span &spn) {(*this) = spn;}

Span &Span::operator=(const Span &spn) 
{
    (void)spn;
	return (*this);
}

Span::~Span(){}

void    Span::printSpan()
{
    for (int i = 0; this->span[i]; i++){std::cout << this->span[i] << std::endl;}
}

void    Span::addNumber(int nb)
{
    span.push_back(nb);

}

int	Span::shortestSpan()
{
    if (span.size() <= 1)
        throw std::runtime_error("Impossible to compute shortest");
    std::vector<int> tmp = span;
    std::sort(tmp.begin(), tmp.end());

    int shortest = tmp.at(1) - tmp.at(0);

    for (unsigned long i = 0; i < span.size() - 1; i++)
    {
        if ((span.at(i + 1) - span.at(i)) < shortest && (span.at(i + 1) - span.at(i)) > 0)
            shortest = span.at(i + 1) - span.at(i);
    }
    return (shortest);
}

int	Span::longestSpan()
{
        if (span.size() <= 1)
            throw std::runtime_error("Impossible to compute longest");
        int min = span.at(0);
        int max = span.at(0);
        for (unsigned long i = 0; i < span.size(); i++)
        {
            if ( span.at(i) < min)
                min = span.at(i);
            if ( span.at(i) > max)
                max = span.at(i);
        }
        return (max - min);
}

void	Span::spamRandom()
{
    std::srand(std::time(nullptr));
    for (unsigned long i = 0; i < span.capacity(); i++)
    {
        span.push_back(std::rand());
    }
}

