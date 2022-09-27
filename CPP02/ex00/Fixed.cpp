#include "Fixed.hpp"


const int		Fixed::_fract = 8;

Fixed::Fixed(Fixed const & old): _integer(old._integer)
{
	std::cout << "Copy contructor" << std::endl;
	return ;
}

Fixed::Fixed(void)
{
	std::cout << "Default contructor" << std::endl;
	this->_integer = 0;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destruccteur called" << std::endl;
	return ;
}

int			Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_integer);
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "set raw member function called" << std::endl;
	this->_integer = raw;
	return ;
}

Fixed&		Fixed::operator=(Fixed const &old)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &old)
		this->_integer = old.getRawBits();
	return (*this);
}