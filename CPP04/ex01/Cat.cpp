/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:27 by asimon            #+#    #+#             */
/*   Updated: 2022/08/07 02:34:30 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "| Default Constructor Cat |" << std::endl; 
	this->_id = new Brain();
	return ;
}

Cat::Cat(Cat const &old): Animal("Cat")
{
	std::cout << "| Copy Constructor Cat |" << std::endl; 
	this->_id = new Brain(*old._id);
	return ;
}

Cat::~Cat()
{
	std::cout << "|Destrucor Cat|" << std ::endl;
	delete this->_id;
}

void	Cat::makeSound() const
{
	std::cout << "| makeSound in cat | " << std::endl;
	std::cout << "MIAOOUUUUU" << std::endl;
	return ;
}

Cat		Cat::operator=(Cat &rh)
{
	for (int i = 0; i < 100; i++)
	{
		this->_id->setIdea(rh._id->getIdea(i), i);
	}
	return *this;
}