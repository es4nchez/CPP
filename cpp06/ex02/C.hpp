class C;

#ifndef C_HPP
# define C_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include "Base.hpp"

class  C : public Base
{

public:

    C();
	~C();

    Base * generate(void);
private:

};



#endif