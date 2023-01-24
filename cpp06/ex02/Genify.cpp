#include "Genify.hpp"

void identify(Base& p)
{
    A *testA;
    B *testB;
    C *testC;

    try
    {
	    testA = &dynamic_cast<A&>(p);
        std::cout << "This is a detected \"A\" class from Base with \"void identify(Base& p);\"" << std::endl;
    }
    catch (std::bad_cast &why){}
    try
    {
	    testB = &dynamic_cast<B&>(p);
        std::cout << "This is a detected \"B\" class from Base with \"void identify(Base& p);\"" << std::endl;
    }
    catch (std::bad_cast &why){}
    try
    {
	    testC = &dynamic_cast<C&>(p);
        std::cout << "This is a detected \"C\" class from Base with \"void identify(Base& p);\"" << std::endl;
    }
    catch (std::bad_cast &why){}
}

void identify(Base* p)
{
    A *testA;
    B *testB;

    testA = dynamic_cast<A *>(p);
    testB = dynamic_cast<B *>(p);
    if (testA != NULL)      {std::cout << "This is a detected \"A\" class from Base with \"void identify(Base* p);\"" << std::endl;}
    else if (testB != NULL) {std::cout << "This is a detected \"B\" class from Base with \"void identify(Base* p);\"" << std::endl;}
    else                    {std::cout << "This is a detected \"C\" class from Base with \"void identify(Base* p);\"" << std::endl;}
}

Base * generate(void)
{
    std::time_t result = std::time(nullptr) % 3;

    //std::cout << result << std::endl;

    if (result == 0)
    {
        std::cout << "A \"A\" class from Base is created" << std::endl;
        return new A;
    }
    else if (result == 1)
    {
        std::cout << "A \"B\" class from Base is created" << std::endl;
        return new B;
    }
    else
    {
        std::cout << "A \"C\" class from Base is created" << std::endl;
        return new C;
    }
}