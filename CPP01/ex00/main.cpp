#include "Zombie.hpp"

int		main(void)
{
	Zombie	*test1 = newZombie("Foo1");
	Zombie	*test2 = newZombie("Foo2");

	std::cout << std::endl << "delete number one on the Heap" << std::endl;
	delete test1;
	std::cout << std::endl << "Create 2 objs on stack" << std::endl;
	randomChump("Bar1");
	randomChump("Bar2");
	std::cout << std::endl << "delete number two on the Heap" << std::endl;
	delete test2;
	std::cout << std::endl << "Program end" << std::endl;
	return (0);
}