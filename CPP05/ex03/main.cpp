/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:57:53 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 15:38:04 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main()
{
	Bureaucrat		jo("jo", 150);
	Bureaucrat		lila("lila", 1);
	
	std::string		target1 = "jardin";
	std::string		target2 = "test";
	std::string		target3 = "testrob";
	std::string		target4 = "testpresi";
	std::string		nameTest_1 = "robotomy test";
	std::string		nameTest_2 = "presidential test";
	std::string		nameTest_3 = "shrubbery test";
	std::string		nameTest_4 = "shr test";


	Intern			randomOne;
	AForm			*rf_1;
	AForm			*rf_2;
	AForm			*rf_3;
	AForm			*rf_4;
	
	///////////////////////////////////////////////////////////////
	
	std::cout << "----INTERN FORM's CREATION----" << std::endl << std::endl;

	rf_1 = randomOne.makeForm(nameTest_1, target3);
	rf_2 = randomOne.makeForm(nameTest_2, target4);
	rf_3 = randomOne.makeForm(nameTest_3, target1);
	rf_4 = randomOne.makeForm(nameTest_4, target2);
	std::cout << std::endl;
	
	///////////////////////////////////////////////////////////////
	
	std::cout << "----PRINT DATA----" << std::endl << std::endl;

	std::cout << rf_1 << std::endl;
	std::cout << std::endl;
	std::cout << rf_2 << std::endl;
	std::cout << std::endl;
	std::cout << rf_3 << std::endl;
	std::cout << std::endl;
	std::cout << rf_4 << std::endl;
	std::cout << std::endl;
	std::cout << jo << std::endl;
	std::cout << lila << std::endl;
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----SIGNE FORM----" << std::endl << std::endl;

	jo.signeForm(rf_1);
	lila.signeForm(rf_1);
	std::cout << std::endl;
	jo.signeForm(rf_2);
	lila.signeForm(rf_2);
	std::cout << std::endl;
	jo.signeForm(rf_3);
	lila.signeForm(rf_3);
	std::cout << std::endl;
	jo.signeForm(rf_4);
	lila.signeForm(rf_4);
	std::cout << std::endl;

	///////////////////////////////////////////////////////////////

	std::cout << "----USE FORM----" << std::endl << std::endl;

	jo.executeForm(rf_1);
	lila.executeForm(rf_1);
	std::cout << std::endl;
	jo.executeForm(rf_2);
	lila.executeForm(rf_2);
	std::cout << std::endl;
	jo.executeForm(rf_3);
	lila.executeForm(rf_3);
	std::cout << std::endl;
	jo.executeForm(rf_4);
	lila.executeForm(rf_4);
	std::cout << std::endl;
	
	///////////////////////////////////////////////////////////////

	return (0);
}