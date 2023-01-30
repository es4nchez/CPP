class A;

#ifndef A_HPP
# define A_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Base.hpp"

class  A : public Base
{

public:

    A();
	~A();

    Base * generate(void);
private:

};



#endif