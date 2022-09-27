/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:27 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:24:47 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "| Default Constructor Cat |" << std::endl << std::endl; 
	return ;
}

Cat::Cat(Cat const &old): Animal(old.type)
{
	std::cout << "| Copy Constructor Cat |" << std::endl << std::endl; 
	return ;
}

Cat::~Cat()
{
	std::cout << "| Destructor Cat |" << std ::endl << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "| makeSound in cat | " << std::endl;
	std::cout << "MIAOOUUUUU" << std::endl;
	return ;
}

Cat	&		Cat::operator=(Cat & rh)
{
	std::cout << "Operator = in Cat" << std::endl;
	this->type = rh.type;
	return (*this);
}