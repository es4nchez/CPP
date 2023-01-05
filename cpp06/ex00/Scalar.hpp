#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>


typedef struct s_nb {
	std::string	type;
	float		number;
}				t_nb;


void	numbering(char *input);


#endif