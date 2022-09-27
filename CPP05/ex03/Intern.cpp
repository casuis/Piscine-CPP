/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:02:33 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 15:38:52 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"


Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

AForm*		Intern::makeForm(std::string name, std::string target)
{
	std::string 	tmp[3] = {"robotomy", "shrubbery", "presidential"};
	int		i;
	AForm	*ret;

	for (i = 0; i < 3; i++)
	{
		size_t		pos = name.find(tmp[i]);
		if (pos != std::string::npos)
			break;
	}
	switch (i)
	{
		case 0:
			std::cout << "Intern create Form " << name << std::endl;
			ret = new RobotomyRequestForm(target);
			break ;
		case 1:
			std::cout << "Intern create Form " << name << std::endl;
			ret = new ShrubberyCreationForm(target);
			break;
		case 2:
			std::cout << "Intern create Form " << name << std::endl;
			ret = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Intern can't create Form" << name << std::endl;
			ret = NULL;
			break;
	}
	return (ret);
}
