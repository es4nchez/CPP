class B;

#ifndef B_HPP
# define B_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Base.hpp"

class  B : public Base
{

public:

    B();
	~B();

    Base * generate(void);
private:

};



#endif