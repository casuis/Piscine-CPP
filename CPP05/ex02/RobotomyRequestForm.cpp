/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:19:52 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 15:48:11 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("robotomy", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(): AForm("Default robotomy", 72, 45), _target("Default robotomy target")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & old): AForm("Copy robotomy", 72, 45), _target(old._target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

void		RobotomyRequestForm::execute(Bureaucrat & executor) const
{
	int		random;
	
	srand(time(NULL));
	random = rand() % 2;
	
	try
	{
		AForm::execute(executor);
	}
	catch (std::exception &e)
	{
		throw;
		return ;
	}
	std::cout << "* BZZZZZZZZZZZ *" << std::endl;
	if (random % 2 == 0)
		std::cout << "Robotomyzation succed, " << this->_target << " is now one of us" << std::endl;
	else
		std::cout << "Robotomyzation failed " << this->_target << " is still as before" << std::endl;
	return ;
}

RobotomyRequestForm	&		RobotomyRequestForm::operator=(RobotomyRequestForm &old)
{
	this->_target = old._target;
	return (*this);
}