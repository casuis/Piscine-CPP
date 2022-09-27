#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	ret(name);

	ret.announce();
	return ;
}