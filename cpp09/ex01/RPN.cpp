#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &btc) {(*this) = btc;}

RPN &RPN::operator=(const RPN &btc) 
{
	if (this != &btc)
	{
		this->db = btc.db;
	}
	return (*this);
}

RPN::~RPN() { }

int RPN::calculateRPN(char *str)
{
    int i, j;
    std::string s(str);
    std::string::iterator it;
    for(it = s.begin(); it != s.end(); it++)
    {
        if (*it == ' ')
            continue;
        if (whatOperator(*it) != -1)
        {
            if (this->db.size() < 2)
            {
                std::cout << "Error: Not enough numbers on stack." << std::endl;
                return 1;
            }
            i = this->db.top();
            this->db.pop();
            j = this->db.top();
            this->db.pop();
            if (*it == '/' && i == 0)
            {
                std::cout << "Error: Division by zero." << std::endl;
                return 1;
            }
            this->db.push(oneOperation(j, i, *it));
        }
        else if (whatNumber(*it) >= 0) {
            this->db.push(whatNumber(*it));
        }
        else
        {
            std::cout << "Error: Invalid character encountered in input string." << std::endl;
            return 1;
        }
    }
    if (this->db.size() != 1)
    {
        std::cout << "Error: Invalid RPN expression.";
        return 1;
    }
    std::cout << this->db.top() << std::endl;
    return 0;
}

int RPN::oneOperation(int x, int y, char o) {
    switch (o) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y == 0) {
                std::cout << "Error: Division by zero\n";
                exit(1);
            }
            return x / y;
        default:
            std::cout << "Error: Unknown operator\n";
            exit(1);
    }
}

int RPN::whatNumber(char c)
{
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else {
        return -1;
    }
}


int RPN::whatOperator(char c) {
    if (c == '+') {
        return 0;
    } else if (c == '-') {
        return 1;
    } else if (c == '*') {
        return 2;
    } else if (c == '/') {
        return 3;
    } else {
        return -1;
    }
}