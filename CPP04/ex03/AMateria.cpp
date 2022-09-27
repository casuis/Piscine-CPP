/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 03:39:21 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:10:25 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): type(type)
{
	return ;
}

AMateria::AMateria(): type("rien")
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

std::string const &	AMateria::getType() const
{
	return (this->type);
}

void		AMateria::use(ICharacter &target)
{
	std::cout << "* You have nothing to use on " << target.getName() << " *" << std::endl;
	return ;
}