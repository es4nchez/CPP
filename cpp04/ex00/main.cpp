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
#include <string>
#include <iostream>
#include <fstream>

int main( void )
{


	
	std::cout << std::endl;


	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " is a type of animal" << std::endl;
	std::cout << i->getType() << " is type of animal" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;


	const Animal* k = new Animal();

	const WrongAnimal* o = new WrongAnimal();
	const WrongAnimal* p = new WrongCat();

	k->makeSound();

	o->makeSound();
	p->makeSound();

	delete k;
	delete o;
	delete p;

	return 0;
}
