#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <map>
#include <list>
#include <stack>
#include <vector>
#include "MutantStack.hpp"

int main()
{
	std::cout << std::endl << "--- Mutant Stack Test ---" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << "--- STD List Test ---" << std::endl;
	std::list<int> liststack;
	
	liststack.push_back(5);
	liststack.push_back(17);
	std::cout << liststack.back() << std::endl;
	liststack.pop_back();
	std::cout << liststack.size() << std::endl;
	liststack.push_back(3);
	liststack.push_back(5);
	liststack.push_back(737);
	//[...]
	liststack.push_back(0);
	std::list<int>::iterator itl = liststack.begin();
	std::list<int>::iterator itel = liststack.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::list<int> sl(liststack);
	return 0;
}