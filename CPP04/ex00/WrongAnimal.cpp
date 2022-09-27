/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:03:01 by asimon            #+#    #+#             */
/*   Updated: 2022/08/06 22:39:07 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "| Constructor Wrong Animal |" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	return ;
}

void	WrongAnimal::makeSound()const
{
	std::cout << "| Wrong Animal Noise |" << std::endl;
	return ;
}
