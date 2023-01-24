#ifndef GENIFY_HPP
# define GENIFY_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void);

void identify(Base* p);
void identify(Base& p);

#endif