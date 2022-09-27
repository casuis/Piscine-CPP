/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:46:13 by asimon            #+#    #+#             */
/*   Updated: 2022/08/02 18:09:42 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int	main()
{

	DiamondTrap		test0("Beau Jack");
	DiamondTrap		test1;
	DiamondTrap		test3(test0);

	std::cout << "----WhoAmI TEST----" << std::endl << std::endl;
	test3.whoAmI();
	std::cout << std::endl;
	std::cout << "----ANNEX FUNCTION TEST----" << std::endl << std::endl;
	test3.highFivesGuys();
	test3.guardGate();
	std::cout << std::endl << "----ATTACK TEST----" << std::endl << std::endl;
	for (int i = 0; i < 30 ;i++)
	{
		test3.attack("Roland");
	}
	std::cout << std::endl << "----TAKE DAMAGE TEST----" << std::endl << std::endl;
	for (int i = 0; i < 5 ; i++)
	{
		test3.takeDamage(1);
	}
	std::cout << std::endl;
	test3.printData();
	std::cout << std::endl << "----REPAIRING TEST----" << std::endl << std::endl;
	for (int i = 0; i < 20; i++)
	{
		test3.beRepaired(1);
	}
	std::cout << std::endl;
	test3.printData();
	std::cout << std::endl << "----DEATH TEST----" << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
	{
		test3.takeDamage(42);
	}
	std::cout << std::endl << "----DEATH TEST----" << std::endl << std::endl;
	test3.beRepaired(1);
	test3.printData();
	return (0);
}