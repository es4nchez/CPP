#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &c) {(*this) = c;}

PmergeMe &PmergeMe::operator=(const PmergeMe &pme){

    if (this != &pme)
	{
		this->v = pme.v;
        this->l = pme.l;
	}
	return (*this);
}

PmergeMe::~PmergeMe() { }


void PmergeMe::sortList(std::list<int>& lst, int size)
{

    if (size < SIZE_C)
    {
        insertList(lst);
        return;
    }
    std::list<int> first_half;
    std::list<int> second_half;
    std::list<int>::iterator it = lst.begin();

    for (int i = 0; i < size / 2; i++)
    {
        first_half.push_back(*it);
        it++;
  }
  for (int i = size / 2; i < size; i++) {
    second_half.push_back(*it);
    it++;
  }
  
  sortList(first_half, size / 2);
  sortList(second_half, size - size / 2);
  
  lst.clear();
  std::list<int>::iterator first_it = first_half.begin();
  std::list<int>::iterator second_it = second_half.begin();
  while (first_it != first_half.end() && second_it != second_half.end()) {
    if (*first_it < *second_it) {
      lst.push_back(*first_it);
      first_it++;
    } else {
      lst.push_back(*second_it);
      second_it++;
    }
  }
  while (first_it != first_half.end()) {
    lst.push_back(*first_it);
    first_it++;
  }
  while (second_it != second_half.end()) {
    lst.push_back(*second_it);
    second_it++;
  }

}



void PmergeMe::sortVector(std::vector<int>& vct, int size)
{
    if (size < SIZE_C)
    {
        insertVector(vct);
        return;
    }
  
    std::vector<int> first_half;
    std::vector<int> second_half;
    for (int i = 0; i < size / 2; i++)
        first_half.push_back(vct[i]);
    for (int i = size / 2; i < size; i++)
        second_half.push_back(vct[i]);

    sortVector(first_half, size / 2);
    sortVector(second_half, size - size / 2);

    int first_index = 0;
    int second_index = 0;
    int vec_index = 0;
    while (first_index < size / 2 && second_index < size - size / 2)
    {
        if (first_half[first_index] < second_half[second_index])
        {
            vct[vec_index] = first_half[first_index];
            first_index++;
        }
        else
        {
            vct[vec_index] = second_half[second_index];
            second_index++;
        }
        vec_index++;
    }

    while (first_index < size / 2)
    {
        vct[vec_index] = first_half[first_index];
        first_index++;
        vec_index++;
    }

    while (second_index < size - size / 2)
    {
        vct[vec_index] = second_half[second_index];
        second_index++;
        vec_index++;
    }
}


void PmergeMe::insertList(std::list<int>& lst)
{
    for (std::list<int>::iterator it = ++lst.begin(); it != lst.end(); ++it)
    {
        int key = *it;
        std::list<int>::iterator j = it;
        --j;
        while (j != lst.begin() && *j > key)
        {
            *std::next(j) = *j;
            --j;
        }
        if (*j > key)
        {
            *std::next(j) = *j;
            *j = key;
        }
        else
        {
            *std::next(j) = key;
        }
    }
}



void PmergeMe::insertVector(std::vector<int>& vct)
{
    for (std::vector<int>::iterator it = vct.begin(); it != vct.end(); ++it)
    {
        int key = *it;
        std::vector<int>::iterator j = it;
        while (j != vct.begin() && *(j - 1) > key)
        {
            *j = *(j - 1);
            --j;
        }
        *j = key;
    }
}

void PmergeMe::printList(std::list<int> lst, bool printAll)
{
    int count = 0;
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        std::cout << *it << " ";
        if (!printAll && ++count > 5)
        {
            std::cout << "[...] ";
            break;
        }
    }
    std::cout << std::endl;
}

void PmergeMe::printVector(std::vector<int> vct, bool printAll)
{
    int count = 0;
    for (std::vector<int>::iterator it = vct.begin(); it != vct.end(); ++it)
    {
        std::cout << *it << " ";
        if (!printAll && ++count > 5)
        {
            std::cout << "[...] ";
            break;
        }
    }
    std::cout << std::endl;
}