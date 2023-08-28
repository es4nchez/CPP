#include <iostream>
#include <fstream>
#include "Span.hpp"



int	main()
{
	std::cout << "--- Official tests ---" << std::endl; 
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--- Custom tests ---" << std::endl; 
	try{
	Span sp = Span(5);
	Span sp2 = Span(1);

	sp.addNumber(-2000);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(10);
	sp.addNumber(2000);
	std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span : " << sp.longestSpan() << std::endl;

	std::cout << "Longest span : " << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << exception.what() << std::endl;
	}

	std::cout << "--- BIG TEST ---" << std::endl;
	Span sp3 = Span(100000000);
	sp3.spamRandom();
	//sp3.printSpan();
	std::cout << "Shortest span : " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest span : " << sp3.longestSpan() << std::endl;

	return 0;
}
