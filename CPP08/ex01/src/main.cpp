/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 04:54:24 by asimon            #+#    #+#             */
/*   Updated: 2022/09/16 16:01:56 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../private/Span.hpp"

int main()
{
	Span	test_1(10);
	Span	test_2(0);
	Span	test_3(101); // modify this value for biggest test

	////////////////////////////////////////////////////////////////////////////////
	/* Test for Single Add */
	
	std::cout << "----ADD NUMBER----" << std::endl << std::endl;

	try 
	{
		std::cout << "=> test_1" << std::endl;
		test_1.addNumber(13);
		test_1.addNumber(500);
		test_1.addNumber(10);
		test_1.addNumber(56);
		test_1.addNumber(11);
		std::cout << test_1;
		std::cout << "test_1 DONE" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
		std::cout << "=> test_2" << std::endl;
		test_2.addNumber(13);
		test_2.addNumber(500);
		test_2.addNumber(10);
		test_2.addNumber(56);
		test_2.addNumber(11);
		std::cout << test_2;
		std::cout << "test_2 DONE" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	////////////////////////////////////////////////////////////////////////////////
	/* Test for Iterator plage Add */

	std::cout << "----MULTI ADDS---" << std::endl << std::endl;
	t_vect				tab_test;		

	test_3.addNumber(100); // Test if first value is erased
	for (int i = 0; i < 100; i++)
	{
		tab_test.push_back(i);
	}
	vector_it			start_tab = tab_test.begin();
	vector_it			end_tab  = tab_test.end();
	try 
	{
		test_3.addNumbers(start_tab, end_tab);
		std::cout << test_3;
		std::cout << "test_3 DONE" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	////////////////////////////////////////////////////////////////////////////////
	/* Shortest plage Test */
	
	std::cout << "----SHORTEST----" << std::endl << std::endl;

	try
	{
		std::cout << "shortest on test_1: " << test_1.shortestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	////////////////////////////////////////////////////////////////////////////////
	/* Longuest plage Test*/
	
	std::cout << "----LONGUEST----" << std::endl << std::endl;

	try
	{
		std::cout << "longest on test_1: " << test_1.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}