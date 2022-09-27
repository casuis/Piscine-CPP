#include "Zombie.hpp"

int		main(void)
{
	int		size = 42;
	Zombie	*ptr = zombieHorde(size, "joe");

	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(3) <<  i << "| ";
		ptr[i].announce();
	}
	delete[] ptr;
	return (0);
}