/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:45 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 17:46:17 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int		main()
{
	const AAnimal 		*tab[10];
	const Cat			test1;
	Cat					test2(test1);

	// AAnimal			wrong();
	std::cout << std::endl << "````DEBUT DES TEST````" << std::endl << std::endl;
	std::cout << ">>> DEBUT CREATION CAT" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
		std::cout << "item: " << i << std::endl;
		tab[i] = new Cat;
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
	}
	std::cout << ">>> DEBUT CREATION DOG" << std::endl << std::endl;
	for (int i = 5; i < 10; i++)
	{
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
		std::cout << "item: " << i << std::endl;
		tab[i] = new Dog;
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
	}
	std::cout << ">>> DEBUT DESTRUCTION" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
		std::cout << "item: " << i << std::endl;
		delete tab[i];
		std::cout << std::setw(30) << std::string(30, '-') << std::endl;
	}
	return (0);
}