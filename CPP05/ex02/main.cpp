/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:57:53 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 15:58:23 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat		jo("jo", 150);
	Bureaucrat		lila("lila", 1);
	
	std::string		target1 = "jardin";
	std::string		target2 = "test";
	std::string		target3 = "testrob";
	std::string		target4 = "testpresi";

	ShrubberyCreationForm			first(target1);
	ShrubberyCreationForm			second(target2);
	RobotomyRequestForm				third(target3);
	PresidentialPardonForm			fourth(target4);
	


	///////////////////////////////////////////////////////////////
	
	std::cout << "----PRINT DATA----" << std::endl << std::endl;

	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << std::endl;
	std::cout << third << std::endl;
	std::cout << std::endl;
	std::cout << fourth << std::endl;
	std::cout << std::endl;
	std::cout << jo << std::endl;
	std::cout << lila << std::endl;
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----SIGNE FORM----" << std::endl << std::endl;

	jo.signeForm(first);
	lila.signeForm(first);
	std::cout << std::endl;
	jo.signeForm(third);
	lila.signeForm(third);
	std::cout << std::endl;
	jo.signeForm(fourth);
	lila.signeForm(fourth);
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----USE FORM----" << std::endl << std::endl;

	jo.executeForm(first);
	lila.executeForm(first);
	std::cout << std::endl;
	jo.executeForm(second);
	lila.executeForm(second);
	std::cout << std::endl;
	jo.executeForm(third);
	lila.executeForm(third);
	std::cout << std::endl;
	jo.executeForm(fourth);
	lila.executeForm(fourth);
	std::cout << std::endl;
	
	///////////////////////////////////////////////////////////////

	return (0);
}