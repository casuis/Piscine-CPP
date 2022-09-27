/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:23:16 by asimon            #+#    #+#             */
/*   Updated: 2022/08/22 18:36:24 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("presidential pardon", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(): AForm("Default presidential pardon", 25, 5), _target("Defaut presidental target")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & old):  AForm("Copy Presidential pardon", 25, 5), _target(old._target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

void		PresidentialPardonForm::execute(Bureaucrat & executor) const
{
	try
	{
		AForm::execute(executor);
	}
	catch (std::exception &e)
	{
		throw ;
		return ;
	}
	std::cout << this->_target << " as been as been forgiven by Zaphod Beeblebrox" << std::endl;
	return ;
}