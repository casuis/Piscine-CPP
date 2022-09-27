#include "Fixed.hpp"

int		main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "a set to 5" << std::endl;
	a.setRawBits(5);
	std::cout << "a: " << a.getRawBits() << std::endl;
	std::cout << "b set to 10" << std::endl;
	b.setRawBits(10);
	std::cout << "b: " << b.getRawBits() << std::endl;
	std::cout << "c: " <<c.getRawBits() << std::endl;
	return 0;
}