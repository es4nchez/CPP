#include <iostream>
#include <fstream>
#include <unistd.h>
#include "Genify.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main()
{
 
    Base *p;
    Base *q;
    Base *r;

    p = generate();
    identify(p);
    identify(*p);

    sleep(1);

    q = generate();
    identify(q);
    identify(*q);

    sleep(1);
    
    r = generate();
    identify(r);
    identify(*r);



	return 0;
}