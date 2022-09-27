/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:58 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 17:39:51 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type): type(type)
{
	std::cout << "| Constructor Animal |" << std::endl;
	return ;
}

Animal::Animal(void): type("")
{
	std::cout << "| Default Constructor Animal |" << std::endl;
	return ;
}

Animal::Animal(Animal const &old): type(old.type)
{
	std::cout << "| Copy Constructor Animal |" << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "| Destructor Animal |" << std::endl;
	return ;
}

void	Animal::makeSound() const
{
	std::cout << "No sound in Animal..." << std::endl;
	return ;
}

std::string		Animal::getType() const
{
	return (this->type);
}

void			Animal::setType(std::string const type)
{
	this->type = type;
	return ;
}