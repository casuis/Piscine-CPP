/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:01:57 by asimon            #+#    #+#             */
/*   Updated: 2022/08/06 22:39:41 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(/* args */)
{
	std::cout << "| Wrong Cat Constructor |" << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	return ;
}

void		WrongCat::makeSound()const
{
	std::cout << "| Wrong Cat Sound |" << std::endl;
	return ;
}