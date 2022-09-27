/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:42:49 by asimon            #+#    #+#             */
/*   Updated: 2022/09/16 15:34:14 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../private/header.hpp"
# include "../private/MutantStack.hpp"

int		main()
{
	MutantStack<int>	test;

	////////////////////////////////////////////////////////////////////////////////
	/* Push() Tests */
	std::cout << "==== PUSH TEST ====" << std::endl;

	std::cout << "Push '4' in test" << std::endl;
	test.push(4);
	std::cout << "\ttop: " << test.top() << std::endl;
	std::cout << "\tsize: " << test.size() << std::endl << std::endl;
	std::cout << "Push '5' in test" << std::endl;
	test.push(5);
	std::cout << "\ttop: " << test.top() << std::endl;
	std::cout << "\tsize: " << test.size() << std::endl;
	std::cout << "Pop last elem in test" << std::endl;
	test.pop();
	std::cout << "\tsize: " << test.size() << std::endl;
	std::cout << "\ttop: " << test.top() << std::endl << std::endl;
	std::cout << "Fill test" << std::endl;
	for (int i = 0; i < 30; i++)
	{
		test.push(i);
	}
	std::cout << "\tsize: " << test.size() << std::endl;
	std::cout << std::endl << std::endl;

	////////////////////////////////////////////////////////////////////////////////
	/* Copy Tests */
	
	std::cout << "==== COPY TEST ====" << std::endl;
	MutantStack<int>		copy(test);
	MutantStack<int>::iterator		it = test.begin();
	MutantStack<int>::iterator		ite = test.end();
	MutantStack<int>::iterator		it_2 = copy.begin();
	MutantStack<int>::iterator		ite_2 = copy.end();

	for (; it != ite; it++)
		std::cout << "value: " << *it << std::endl;
	std::cout << std::endl;
	std::cout << "Copy" << std::endl;
	for (; it_2 != ite_2; it_2++)
		std::cout << "cpy value: " << *it_2 << std::endl;
	std::cout << std::endl << std::endl;

	////////////////////////////////////////////////////////////////////////////////
	/* Operator Tests */
	
	std::cout << "==== OPERATOR TEST ====" << std::endl;
	std::cout << "!=: " << (test != copy) << std::endl;
	std::cout << ">=: " << (test >= copy) << std::endl;
	std::cout << ">: " << (test > copy) << std::endl;
	std::cout << "<=: " << (test <= copy) << std::endl;
	std::cout << "<: " << (test < copy) << std::endl;
	std::cout << "==: " << (test == copy) << std::endl;
	return (0);
}