#include "Harl.hpp"

Harl::Harl(/* args */)
{
	this->_tab[0] = "DEBUG";
	this->_tab[1] =  "INFO";
	this->_tab[2] = "WARNING";
	this->_tab[3] =  "ERROR";
	this->_ptr[0] = &Harl::debug;
	this->_ptr[1] = &Harl::info;
	this->_ptr[2] = &Harl::warning;
	this->_ptr[3] = &Harl::error;
	return ;
}

Harl::~Harl()
{
}

void	Harl::debug() const
{
	std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info() const
{
	std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning() const
{
	std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error() const
{
	std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now" << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(this->_tab[i]) == 0)
		{
			(this->*_ptr[i])();
			return ;
		}
	}
	std::cout << "Harl have nothing to say" << std::endl;
	return ;
}