/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 23:28:23 by asimon            #+#    #+#             */
/*   Updated: 2022/08/02 18:30:57 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap		jhon("jhon");
	ClapTrap		jack;
	ClapTrap		jo(jhon);

	std::cout << "ATTACK TEST" << std::endl << std::endl;
	jhon.attack("lilith");
	for (int i = 0; i < 11 ;i++)
	{
		jack.attack("Roland");
	}
	std::cout << std::endl;
	jack.printData();
	std::cout << std::endl << "TAKE DMG TEST" << std::endl << std::endl;
	for (int i = 0; i < 5 ; i++)
	{
		jhon.takeDamage(1);
	}
	std::cout << std::endl;
	jhon.printData();
	std::cout << std::endl << "REPAIRED TEST" << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
	{
		jhon.beRepaired(1);
	}
	std::cout << std::endl;
	jhon.printData();
	std::cout << std::endl << "TAKE DMG TEST2" << std::endl << std::endl;
	for (int i = 0; i < 15; i++)
	{
		jhon.takeDamage(1);
	}
	std::cout << std::endl;
	jhon.printData();
	std::cout << std::endl << "REPAIRED TEST2" << std::endl << std::endl;
	jhon.beRepaired(1);
	std::cout << std::endl;
	jhon.printData();
	return (0);
}