#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <list>
#include <vector>

#define SIZE_C 10


class  PmergeMe
{

public:

	PmergeMe();
	PmergeMe(const PmergeMe &brc);
	PmergeMe &operator=(const PmergeMe &pme);
	~PmergeMe();

	void sortList(std::list<int>& lst, int size);
	void insertList(std::list<int>& lst);
	void printList(std::list<int> lst, bool printAll);

	void sortVector(std::vector<int>& vct, int size);
	void insertVector(std::vector<int>& vct);
	void printVector(std::vector<int> vct, bool printAll);

	std::list<int> l;
	std::vector<int> v;

private:

};

#endif