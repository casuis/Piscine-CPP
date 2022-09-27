#include "Zombie.hpp"

Zombie*		zombieHorde(int N, std::string name)
{
	Zombie *test = new Zombie[N];
	for (int i = 0; i < N; i++)
		test[i].set_name(name); 
	return (test);
}