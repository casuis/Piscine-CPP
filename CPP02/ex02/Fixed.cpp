/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:41:52 by asimon            #+#    #+#             */
/*   Updated: 2022/07/28 20:09:50 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


const int		Fixed::_fract = 8;

Fixed::Fixed(const float value): _integer(static_cast<int>(value * (1 << Fixed::_fract)))
{
	return ;
}

Fixed::Fixed(const int value): _integer(value << Fixed::_fract)
{
	return ;
}

Fixed::Fixed(void)
{
	this->_integer = 0;
	return;
}

Fixed::Fixed(Fixed const & old): _integer(old._integer)
{
	return ;
}

Fixed::~Fixed()
{
	return ;
}

int			Fixed::getRawBits() const
{
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
	return (this->_integer >> Fixed::_fract);
}

Fixed		Fixed::min(Fixed &i1, Fixed &i2)
{
	if (i1 < i2)
		return (i1);
	return (i2);
}

Fixed		Fixed::min(Fixed const &i1, Fixed const &i2)
{
	if (i1 < i2)
		return (i1);
	return (i2);
}

Fixed		Fixed::max(Fixed &i1, Fixed &i2)
{
	if (i1 > i2)
		return (i1);
	return (i2);
}

Fixed		Fixed::max(Fixed const &i1, Fixed const &i2)
{
	if (i1 > i2)
		return (i1);
	return (i2);
}

Fixed&		Fixed::operator=(Fixed const &old)
{
	if (this != &old)
		this->_integer = old.getRawBits();
	return (*this);
}

bool		Fixed::operator<(Fixed const &old) const
{
	return (this->_integer < old._integer);
}

bool		Fixed::operator<=(Fixed const &old) const
{
	return (this->_integer <= old._integer);
}

bool		Fixed::operator>(Fixed const &old) const
{
	return (this->_integer > old._integer);
}

bool		Fixed::operator>=(Fixed const &old) const
{
	return (this->_integer >= old._integer);
}

bool		Fixed::operator!=(Fixed const &old) const
{
	return (this->_integer != old._integer);
}

bool		Fixed::operator==(Fixed const &old) const
{
	return (this->_integer == old._integer);
}

Fixed		&Fixed::operator++()
{
	this->_integer += 1;
	return *this;
}

Fixed		Fixed::operator++(int)
{
	Fixed		temp = *this;

	this->_integer += 1;
	return temp;
}

Fixed		Fixed::operator--(int)
{
	Fixed		temp = *this;

	this->_integer -= 1;
	return temp;
}

Fixed&			Fixed::operator--()
{
	this->_integer -= 1;
	return *this;
}

Fixed		Fixed::operator*(Fixed const &rhs) const
{
	Fixed	ret(this->toFloat() * rhs.toFloat());
	
	return ret;
} 

Fixed		Fixed::operator-(Fixed const &rhs) const
{
	Fixed		ret(this->toFloat() - rhs.toFloat());

	return ret;
}

Fixed		Fixed::operator+(Fixed const &rhs) const
{
	Fixed		ret(this->toFloat() + rhs.toFloat());

	return ret;
}

Fixed		Fixed::operator/(Fixed const &rhs) const
{
	Fixed		ret(this->toFloat() / rhs.toFloat());

	return ret;
}

std::ostream&		operator<<(std::ostream &stream, Fixed const &used)
{
	stream << used.toFloat(); 
	return (stream);
}
