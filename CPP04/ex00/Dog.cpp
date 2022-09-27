/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:37 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:24:30 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "| Default Dog Constructor |" << std::endl;
	return ;
}

Dog::Dog(Dog const &old): Animal(old.type)
{
	std::cout << "| Copy Dog Constructor |" << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog" << std::endl;
	return;
}

void	Dog::makeSound() const
{
	std::cout << "| makeSound in Dog |" << std::endl;
	std::cout << "Wouaf!" << std::endl;
	return ;
}

Dog		&	Dog::operator=(Dog & rh)
{
	std::cout << "Operator = in Dog" << std::endl;
	this->type = rh.type;
	return (*this);
}