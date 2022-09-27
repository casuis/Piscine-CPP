#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <sstream>
# include <iostream>
# include <iomanip>
# include <string>
# include <new>

class		Zombie
{
	private:
		std::string		_name;

	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie();
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
		void	set_name(std::string name);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name);

#endif