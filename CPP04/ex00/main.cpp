/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:45 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 18:00:18 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main()
{
	// Cretion des annimaux
	std::cout << "----CREATION OF ANNIMALS----" << std::endl << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* dog = new Dog();
	std::cout << std::endl;
	const Animal* cat = new Cat();
	std::cout << std::endl;
	const WrongAnimal* n = new WrongCat();
	std::cout << std::endl;

	////////////////////////////////////////////

	// Print types

	std::cout << "----PRINT ANNIMALS'S TYPE----" << std::endl << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl;

	////////////////////////////////////////////

	std::cout << "----PRINT ANNIMALS'S SOUND----" << std::endl << std::endl;
	
	cat->makeSound(); //will output the cat sound!
	std::cout << std::endl;

	dog->makeSound();
	std::cout << std::endl;
	
	n->makeSound();
	std::cout << std::endl;
	
	meta->makeSound();
	std::cout << std::endl;

	////////////////////////////////////////////
	
	delete meta;
	delete cat;
	delete dog;
	delete n;
	return (0);
}