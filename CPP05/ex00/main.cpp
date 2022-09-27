/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:57:53 by asimon            #+#    #+#             */
/*   Updated: 2022/08/18 12:32:51 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat		jo("jo", 150);
	Bureaucrat		lila("lila", 1);

	std::cout << jo << std::endl;
	std::cout << lila << std::endl;
	
	///////////////////////////////////////////////////////////////
	
	std::cout << "----TEST CREATION-----" << std::endl << std::endl;
	try
	{
		std::cout << "test Phil | grade 155 :" << std::endl;
		Bureaucrat		phil("phil" ,155);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "test lola | grade 0 :" << std::endl;
		Bureaucrat		lola("lola", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << jo << std::endl;
	std::cout << lila << std::endl;
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----TEST DECREMENT-----" << std::endl << std::endl;
	try
	{
		std::cout << "Test de jo :" << std::endl;
		jo.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "Test de lila :" << std::endl;
		lila.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << jo << std::endl;
	std::cout << lila << std::endl;
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----TEST INCREMENT-----" << std::endl << std::endl;
	
	try
	{
		std::cout << "Test de lila 1: " << std::endl;
		lila.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << "Test de lila 2:" << std::endl;
		lila.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << "Test de jo :" << std::endl;
		jo.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << jo << std::endl;
	std::cout << lila << std::endl;

	return (0);
}