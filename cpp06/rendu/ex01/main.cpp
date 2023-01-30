#include <iostream>
#include <fstream>
#include "Data.hpp"

int	main()
{
    Data d = {1, 2.5, 'a'};
    uintptr_t serialized = serialize(&d);
    Data* deserialized = deserialize(serialized);

    std::cout << "Original Data\t\t:"
        << " x=" << d.x << " y=" << d.y << " z=" << d.z << std::endl;
    std::cout << "Deserialized Data\t:"
        << " x=" << deserialized->x << " y=" << deserialized->y << " z=" << deserialized->z << std::endl;

    std::cout << "Original address x\t: " << &d.x << std::endl;
    std::cout << "Deserialized address x\t: " << &deserialized->x << std::endl;
	return 0;
}