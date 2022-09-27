#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	this->_weapon = &weapon;
	this->_name = name;
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}
