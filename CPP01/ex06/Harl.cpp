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
	std::cout << "[DEBUG]" << std::endl << std::endl
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::info() const
{
	std::cout << "[INFO]" << std::endl << std::endl 
	<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::warning() const
{
	std::cout << "[WARNING]" << std::endl << std::endl 
	<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::error() const
{
	std::cout << "[ERROR]" << std::endl << std::endl
	<< "This is unacceptable! I want to speak to the manager now" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	int		ret = -1;

	for (int i = 0; i < 4; i++)
		if (level.compare(this->_tab[i]) == 0)
			ret = i;
	switch (ret)
	{
		case 0:
			for (int i = 0; i < 4; i++)
				(this->*_ptr[i])();
			break;

		case 1:
			for (int i = 1; i < 4; i++)
				(this->*_ptr[i])();
			break;

		case 2:
			for (int i = 2; i < 4; i++)
				(this->*_ptr[i])();
			break;

		case 3:
			for (int i = 3; i < 4; i++)
				(this->*_ptr[i])();
			break;
				
		default:
			std::cout << std::endl << "[Probably complaining about insignificant problems]" << std::endl;
			std::cout << std::endl;
			break;
	}
	return ;
}