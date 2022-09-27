/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:37 by asimon            #+#    #+#             */
/*   Updated: 2022/08/07 00:42:28 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): AAnimal("Dog")
{
	std::cout << "| Default Dog Constructor |" << std::endl;
	this->_id = new Brain();
	return ;
}

Dog::Dog(Dog const &old): AAnimal(old.type)
{
	std::cout << "| Copy Dog Constructor |" << std::endl;
	this->_id = new Brain(*old._id);
	return ;
}

Dog::~Dog()
{
	std::cout << "|Destructor Dog|" << std::endl;
	delete this->_id;
	return;
}

void	Dog::makeSound() const
{
	std::cout << "| makeSound in Dog |" << std::endl;
	std::cout << "Wouaf!" << std::endl;
	return ;
}

Dog		Dog::operator=(Dog &rh)
{
	for (int i = 0; i < 100; i++)
	{
		this->_id->setIdea(rh._id->getIdea(i), i);
	}
	return (*this);
}