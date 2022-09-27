/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:42:52 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 14:08:39 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Func.hpp"


Func::Func()
{
	return ;
}

Func::~Func()
{
	return ;
}

void		Func::identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "class is A type" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "class is B type" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "class is C type" << std::endl;
	else
		std::cerr << "Error" << std::endl;
	return ;
}