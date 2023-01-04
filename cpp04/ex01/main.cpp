/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esanchez <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:36:40 by esanchez          #+#    #+#             */
/*   Updated: 2022/09/12 10:36:43 by esanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>
#include <fstream>

int main( void )
{
	std::cout << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		const WrongAnimal* wmeta = new WrongAnimal();
		const WrongAnimal* wi = new WrongCat();

		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		wmeta->makeSound();
		wi->makeSound();

		delete meta;
		delete j;
		delete i;
		delete wi;
		delete wmeta;
	}

	std::cout << std::endl;

	const int nb = 10;
    Animal** animals = new Animal*[nb];
    for (int i = 0; i < nb; ++i)
	{
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < nb; ++i)
        delete animals[i];
    delete[] animals;
	return 0;
}
