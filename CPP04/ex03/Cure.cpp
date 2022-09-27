/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:10:45 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:15:53 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	return ;
}

Cure::~Cure()
{
	return ;
}

void		 Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wound *" << std::endl;
	return ;
}

AMateria*		Cure::clone() const
{
	AMateria	*ret = new Cure();

	return (ret);
}

Cure	&		Cure::operator=(Cure &rh)
{
	std::cout << "Operator = in Cure" << std::endl;
	this->type = rh.type;
	return (*this);
}