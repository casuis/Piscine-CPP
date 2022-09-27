/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:46:13 by asimon            #+#    #+#             */
/*   Updated: 2022/08/02 18:05:22 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int	main()
{

	FragTrap		test0("0");
	FragTrap		test1;
	FragTrap		test2(test0);

	std::cout << "GUARD TEST" << std::endl << std::endl;
	test0.highFivesGuys();
	std::cout << std::endl << "ATTACK TEST" << std::endl << std::endl;
	test0.attack("lilith");
	for (int i = 0; i < 51 ;i++)
	{
		test1.attack("Roland");
	}
	std::cout << std::endl << "TAKE DAMAGE TEST" << std::endl << std::endl;
	for (int i = 0; i < 5 ; i++)
	{
		test0.takeDamage(1);
	}
	std::cout << std::endl;
	test0.printData();
	std::cout << std::endl << "REPAIRING TEST" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		test0.beRepaired(1);
	}
	std::cout << std::endl;
	test0.printData();
	std::cout << std::endl << "DEATH TEST" << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
	{
		test0.takeDamage(42);
	}
	return (0);
}