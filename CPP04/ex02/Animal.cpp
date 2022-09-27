/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:58 by asimon            #+#    #+#             */
/*   Updated: 2022/08/07 02:58:38 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(std::string type): type(type)
{
	std::cout << "| Constructor AAnimal |" << std::endl << std::endl;
	return ;
}

AAnimal::AAnimal(void): type("")
{
	std::cout << "| Default Constructor AAnimal |" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &old): type(old.type)
{
	std::cout << "| Copy Constructor AAnimal |" << std::endl;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << "| Destructor AAnimal |" << std::endl;
	return ;
}

std::string		AAnimal::getType() const
{
	return (this->type);
}

void			AAnimal::setType(std::string const type)
{
	this->type = type;
	return ;
}