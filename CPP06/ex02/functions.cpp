/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:30:09 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 14:20:34 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base*		generate(void)
{
	int			rand_nb = -1;
	Base		*ret = 0x0;

	srand(time(0x0));
	rand_nb = rand() % 3;
	switch(rand_nb)
	{
		case 0:
			std::cout << "A creation:" << std::endl;
			ret = new A();
			break;
		case 1:
			std::cout << "B creation:" << std::endl;
			ret = new B();
			break;
		case 2:
			std::cout << "C creation:" << std::endl;
			ret = new C();
			break;
		default:
			break;
	}
	return (ret);
}


void		identify(Base& p)
{
	A		tmp_1;
	B		tmp_2;
	C		tmp_3;

	try
	{
		tmp_1 = dynamic_cast<A&>(p);
		std::cout << "class is A type by ref" << std::endl;
		return ;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		tmp_2 = dynamic_cast<B&>(p);
		std::cout << "class is B type by ref" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		tmp_3 = dynamic_cast<C&>(p);
		std::cout << "class is C type by ref" << std::endl;
		return ;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	
	return;
}