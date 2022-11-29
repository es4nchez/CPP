#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie* newHorde = new Zombie[N];


	for(int z = 0; z < N; z++)
	{

		newHorde[z].named(name);
		std::cout << "Zombie No " << z <<  " created" << std::endl;
		newHorde[z].announce();

	}
	return(newHorde);
}