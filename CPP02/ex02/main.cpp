/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:42:05 by asimon            #+#    #+#             */
/*   Updated: 2022/07/28 20:03:41 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main()
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << std::endl << "INCREMENTATION" << std::endl << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl << std::endl;
std::cout <<"a post: " << ++a << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "a past: " << a++ << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << std::endl << "DECREMENTATION" << std::endl << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl << std::endl;
std::cout <<"a post: " << --a << std::endl;
std::cout << "a: " <<  a << std::endl;
std::cout << "a past: " << a-- << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << std::endl << "ADDITION" << std::endl << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl << std::endl;
std::cout << "a + b = " << a + b << std::endl;
std::cout << std::endl << "SOUSTRACTION" << std::endl << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl << std::endl;
std::cout << "a - b = " << a - b << std::endl;
std::cout << std::endl << "MULTIPLICATION | ASSIGNIATION" << std::endl << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl << std::endl;
std::cout << "assigniation a = 2" << std::endl << std::endl;
a = 2;
std::cout << "a:  " << a << std::endl;
std::cout << "a * b = " << a * b << std::endl;
std::cout << std::endl << "DIVISION" << std::endl << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl << std::endl;
std::cout << "a / b = " << a / b << std::endl;
std::cout << std::endl << "LOGICALS OPPERATORS" << std::endl << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl << std::endl;
std::cout << "a < b: " << (a < b) << std::endl; 
std::cout << "a > b: " << (a > b) << std::endl; 
std::cout << "a <= b: " << (a <= b) << std::endl; 
std::cout << "a >= b: " << (a >= b) << std::endl; 
std::cout << "a != b: " << (a != b) << std::endl; 
std::cout << "a == b: " << (a == b) << std::endl; 
std::cout << std::endl << "MAX | MIN FUNCTIONS" << std::endl << std::endl;
std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl << std::endl;
std::cout << "max between a && b: " << Fixed::max( a, b ) << std::endl;
std::cout << "min between a && b: " << Fixed::min( a, b ) << std::endl;
return 0;
}