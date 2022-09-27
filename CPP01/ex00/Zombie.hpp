#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <sstream>
# include <iostream>
# include <iomanip>
# include <string>

class		Zombie
{
	private:
		std::string		_name;

	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif