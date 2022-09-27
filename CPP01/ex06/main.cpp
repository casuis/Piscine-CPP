#include "Harl.hpp"

int		main(int argc, char **argv)
{
	Harl	obj;
	if (argc != 2)
		std::cout << "Error Format!" << std::endl << "need 1 arg: [./a.out] [arg 1]" << std::endl;
	else
	{
		obj.complain(argv[1]);
	}
	return (0);
}