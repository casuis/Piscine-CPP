/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:55:40 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 14:22:30 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include "Func.hpp"

int	main()
{
	Func		test;
	Base		*tmp;
	
	/////////////////////////////////////////////////////

	std::cout << "----INIT----" << std::endl << std::endl;
	tmp = generate();
	std::cout << std::endl;

	/////////////////////////////////////////////////////

	std::cout << "----IDENTIFY BY PTR----" << std::endl << std::endl;
	test.identify(tmp);
	std::cout << std::endl;
	
	/////////////////////////////////////////////////////

	std::cout << "----IDENTIFY BY REF----" << std::endl << std::endl;
	identify(*tmp);
	std::cout << std::endl;
	return (0);
}