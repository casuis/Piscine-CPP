/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:19:44 by asimon            #+#    #+#             */
/*   Updated: 2022/09/05 19:45:17 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	function_test(int  nb)
{
	std::cout << "number: " << nb << std::endl;
	return ;
}

void	function_test_2(std::string test)
{
	std::cout << "string: " << test << std::endl;
}


int		main()
{
	int				tab_1[4] = {0, 1, 2, 3};
	std::string		tab_2[4] = {"salut", "un", "test", "a"};
	iter(tab_1, static_cast<size_t>(4), &function_test);
	iter(tab_2, static_cast<size_t>(4), &function_test_2);
	return (0);
}