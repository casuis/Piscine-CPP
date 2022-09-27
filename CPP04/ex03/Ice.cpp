/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:29:00 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:16:37 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	return ;
}

Ice::~Ice()
{
	return ;
}

Ice::Ice(Ice const & old)
{
	this->type = old.type;
}

void 		Ice::use(ICharacter& target)
{
	std::cout << "* shot an ice bolt at " << target.getName() << " *" << std::endl; 
	return ;
}

AMateria*		Ice::clone() const
{
	AMateria	*ret = new Ice();

	return (ret);
}

Ice		&		Ice::operator=(Ice & rh)
{
	std::cout << "Operator = in Ice"  << std::endl;
	this->type = rh.type;
	return (*this);
}