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
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		const WrongAnimal* wmeta = new WrongAnimal();
		const WrongAnimal* wi = new WrongCat();

		i->makeSound();
		j->makeSound();

		wmeta->makeSound();
		wi->makeSound();

		delete j;
		delete i;
		delete wi;
		delete wmeta;

		// const Animal* meta = new Animal();  // uncomment for testing 
		// meta->makeSound();
		// delete meta;
	}
	return 0;
}
