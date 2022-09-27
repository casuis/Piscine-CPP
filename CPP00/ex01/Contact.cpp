#include "./Contact.class.hpp"

Contact::Contact(/* args */)
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::set_first_name()
{
	std::string		buff;

	while (buff.length() <= 0 && std::cin)
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, buff);
	}
	this->_first_name = buff;
	return ;
}

void	Contact::set_last_name()
{
	std::string		buff;

	while (buff.length() <= 0 && std::cin)
	{
		std::cout << "Enter your last name: ";
		std::getline(std::cin, buff);
	}
	this->_last_name = buff;
	return ;
}

void	Contact::set_nickname()
{
	std::string		buff;

	while (buff.length() <= 0 && std::cin)
	{
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, buff);
	}
	this->_nickname = buff;
	return ;
}

void	Contact::set_phone()
{
	std::string		buff;

	while (buff.length() <= 0 && std::cin)
	{
		std::cout << "Enter your phone number: ";
		std::getline(std::cin, buff);
	}
	this->_phone = buff;
	return ;
}

void	Contact::set_darkest_secret()
{
	std::string		buff;

	while (buff.length() <= 0 && std::cin)
	{
		std::cout << "Enter your darkest secret: ";
		std::getline(std::cin, buff);
	}
	this->_darkest_secret = buff;
	return ;
}

void	Contact::set()
{
	this->set_first_name();
	this->set_last_name();
	this->set_nickname();
	this->set_phone();
	this->set_darkest_secret();
}

std::string	Contact::get_trunc_firstname()
{
	if (this->_first_name.length() < 10)
		return (this->_first_name);
	else
		return (this->_first_name.substr(0, 9) + '.');
}

std::string	Contact::get_trunc_lastname()
{
	if (this->_last_name.length() < 10)
		return (this->_last_name);
	else
		return (this->_last_name.substr(0, 9) + '.');
}

std::string	Contact::get_trunc_nickname()
{
	if (this->_nickname.length() < 10)
		return (this->_nickname);
	else
		return (this->_nickname.substr(0, 9) + '.');
}

std::string	Contact::get_trunc_darkestsecret()
{
	if (this->_darkest_secret.length() < 10)
		return (this->_darkest_secret);
	else
		return (this->_darkest_secret.substr(0, 9) + '.');
}

std::string	Contact::get_trunc_phone()
{
	if (this->_phone.length() < 10)
		return (this->_phone);
	else
		return (this->_phone.substr(0, 9) + '.');
}

std::string	Contact::get_firstname()
{
	return (this->_first_name);
}

std::string	Contact::get_lastname()
{
	return (this->_last_name);
}

std::string	Contact::get_nickname()
{
	return (this->_nickname);
}

std::string	Contact::get_phone()
{
	return (this->_phone);
}

std::string	Contact::get_darkestsecret()
{
	return (this->_darkest_secret);
}