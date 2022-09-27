/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:41:52 by asimon            #+#    #+#             */
/*   Updated: 2022/07/28 20:15:57 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int		Fixed::_fract = 8;

Fixed::Fixed(const float value): _integer(static_cast<int>(value * (1 << Fixed::_fract)))
{
	std::cout << "Float constructor called " << std::endl;
	return ;
}

Fixed::Fixed(const int value): _integer(value << Fixed::_fract)
{
	std::cout << "Integer constructor called" << std::endl;
	return ;
}

Fixed::Fixed(void)
{
	std::cout << "Default constructor called " << std::endl;
	this->_integer = 0;
	return;
}

Fixed::Fixed(Fixed const & old): _integer(old._integer)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

int			Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void		Fixed::setRawBits(int const raw)
{
	this->_integer = raw;
	return ;
}

float		Fixed::toFloat() const
{
	float ret = static_cast<float>(this->_integer) / (1 << Fixed::_fract);
	return (ret);
}

int			Fixed::toInt() const
{
	return (static_cast<int>(this->_integer >> Fixed::_fract));
}

Fixed&		Fixed::operator=(Fixed const &old)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &old)
		this->_integer = old.getRawBits();
	return (*this);
}

std::ostream&		operator<<(std::ostream &stream, Fixed const &used)
{
	stream << used.toFloat(); 
	return (stream);
}