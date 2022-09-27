/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:42:05 by asimon            #+#    #+#             */
/*   Updated: 2022/07/28 20:17:18 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a: " << a.toInt() << " as integer" << std::endl;
	std::cout << "b: " << b.toInt() << " as integer" << std::endl;
	std::cout << "c: " << c.toInt() << " as integer" << std::endl;
	std::cout << "d: " << d.toInt() << " as integer" << std::endl;
	std::cout << "a: " << a.toFloat() << " as float" << std::endl;
	std::cout << "b: " << b.toFloat() << " as float" << std::endl;
	std::cout << "c: " << c.toFloat() << " as float" << std::endl;
	std::cout << "d: " << d.toFloat() << " as float" << std::endl;
	return 0;
}