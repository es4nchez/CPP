#ifndef RNP_HPP
# define RNP_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <map>



class  RPN
{

public:

	RPN();
	RPN(const RPN &brc);
	RPN &operator=(const RPN &brc);
	~RPN();

	int calculateRPN(char *str);

private:

	std::stack<int> db;

	int	whatOperator(char c);
	int	whatNumber(char c);
	int	oneOperation(int x, int y, char o);
	float	charf(char ch);
};


#endif