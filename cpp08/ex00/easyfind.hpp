#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>


template <typename T>
int	const	&easyfind(T &container, int val)
{
	typename T::iterator	it;
	it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
		throw std::runtime_error("value not found");
	return *it;
}

#endif