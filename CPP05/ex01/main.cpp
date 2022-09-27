/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:57:53 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 15:51:54 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat		jo("jo", 150);
	Bureaucrat		lila("lila", 1);

	std::cout << jo << std::endl;
	std::cout << lila << std::endl;

	Form			first("first", 50, 20);
	Form			second("second", 10, 1);


	///////////////////////////////////////////////////////////////
	
	std::cout << "----FORMS----" << std::endl << std::endl;

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////
	
	std::cout << "----TEST CREATION-----" << std::endl << std::endl;
	
	try
	{
		std::cout << "test Phil | signe grade 155 :" << std::endl;
		Form		phil("phil" ,155 , 19);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "test Phil | exec grade 155 :" << std::endl;
		Form		phil("phil" ,1 , 155);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "test lola | signe grade 0 :" << std::endl;
		Form		lola("lola", 0, 10);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "test lola | exec grade 0 :" << std::endl;
		Form		lola("lola", 10, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	///////////////////////////////////////////////////////////////

	std::cout << "----TEST SIGNATURE FAILED-----" << std::endl << std::endl;

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "Test for first Form:" << std::endl;
	try
	{
		jo.signeForm(first);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "Test for second Form:" << std::endl;
	try
	{
		jo.signeForm(second);
	}	
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----TEST SIGNATURE SUCCED-----" << std::endl << std::endl;

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "Test for first Form:" << std::endl;
	try
	{
		lila.signeForm(first);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Test for second Form:" << std::endl;
	try
	{
		lila.signeForm(second);
	}	
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----END-----" << std::endl << std::endl;

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << std::endl;

	return (0);
}