/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:17:24 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 12:36:32 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int		main()
{
	Data			*ptr = new Data;
	uintptr_t		tmp;

	//////////////////////////////////////////////
	std::cout << "----INIT----" << std::endl << std::endl;
	ptr->test = "c'est mon test";
	std::cout << "address: " << ptr << std::endl;
	std::cout << "value: " << ptr->test << std::endl;
	std::cout << std::endl;

	//////////////////////////////////////////////

	std::cout << "----SERIALIZE----" << std::endl << std::endl;
	tmp = serialize(ptr);
	ptr = NULL;
	std::cout << "tmp: " << tmp << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << std::endl;
	
	//////////////////////////////////////////////

	std::cout << "----DESERIALIZE----" << std::endl << std::endl;
	ptr = deserialize(tmp);
	tmp = 0;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "tmp: " << tmp << std::endl;
	std::cout << std::endl;
	
	//////////////////////////////////////////////

	std::cout << "----END VALUE----" << std::endl << std::endl;
	std::cout << ptr->test << std::endl;
	std::cout << std::endl;
	delete ptr;
	return (0);
}