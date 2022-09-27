#include <iostream>
#include <string>
#include <iomanip>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "address str: " << &str << std::endl;
	std::cout << "address PTR: " << stringPTR << std::endl;
	std::cout << "address REF: " << &stringREF << std::endl;

	std::cout << "value of str: " << str << std::endl;
	std::cout << "value of PTR: " << *stringPTR << std::endl;
	std::cout << "value of REF: " << stringREF << std::endl;

	return (0);
}