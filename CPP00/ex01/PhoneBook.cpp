/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:34:33 by asimon            #+#    #+#             */
/*   Updated: 2022/07/07 19:40:01 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void	PhoneBook::menu()
{
	if (std::cin)
	{
		std::cout << std::endl;
		std::cout << std::string(25, '-') << std::endl;
		std::cout << "PHONEBOOK" << std::endl;
		std::cout << std::string(25, '-') << std::endl;
		std::cout << "ADD  |  " ;
		std::cout << "SEARCH  |  ";
		std::cout << "EXIT" << std::endl << std::endl;
		std::cout << "$>: ";
	}
}

void	PhoneBook::setcontact(int pos)
{
	this->_repo[pos].set();
}

void	PhoneBook::print_tab()
{
	std::cout << "\t     ";
	std::cout << std::string(32, '-') << std::endl;
	std::cout << "\t    |" << std::setw(10) << std::right << "FIRST NAME";
	std::cout << "|" << std::setw(10) << std::right << "LAST NAME";
	std::cout << "|" << std::setw(10) << std::right << "NICKNAME";
	std::cout << "|" << std::endl;
	std::cout << "\t " << std::string(36, '-') << std::endl;  
	for(int i = 0; i < 8; i++)
	{
		std::cout << "\t| " << i + 1 << " ";
		std::cout << "|" << std::setw(10) << std::right << this->_repo[i].get_trunc_firstname(); 
		std::cout << "|" << std::setw(10) << std::right << this->_repo[i].get_trunc_lastname(); 
		std::cout << "|" << std::setw(10) << std::right << this->_repo[i].get_trunc_nickname(); 
		std::cout << "|" << std::endl;
		std::cout << "\t ";
		std::cout << std::string(36, '-') << std::endl;  
	}
}

int	PhoneBook::delete_old()
{
	Contact		buff;
	for (int i = 0; i < 7; i++)
		this->_repo[i] = this->_repo[i +  1];
	this->_repo[7] = buff;
	return (7);
}

void	PhoneBook::search()
{
	int		res;

	this->print_tab();
	res = this->get_index();
	while ((res <= 0 || res > 8) && res != -1 && std::cin)
		res = this->get_index();
	if (std::cin.eof())
		return ;
	if (res == -1)
		return ;
	std::cout << std::endl << "\tName: " << "[" << this->_repo[res - 1].get_firstname() << "]" << std::endl;
	std::cout << "\tLast Name: " << "[" << this->_repo[res - 1].get_lastname() << "]" << std::endl;
	std::cout << "\tNickname: " << "[" << this->_repo[res - 1].get_nickname() << "]" << std::endl;
	std::cout << "\tPhone: " << "[" << this->_repo[res - 1].get_phone() << "]" << std::endl;
	std::cout << "\tDarkest Secret: " << "[" << this->_repo[res - 1].get_darkestsecret() << "]" << std::endl;
	return ;
}

int		PhoneBook::get_index()
{
	std::string			prompt;
	std::stringstream	prompt_buff;
	int					ret;
	
	std::cout << "Enter [Index [1 - 8] | [exit]]: ";
	std::getline(std::cin, prompt);
	if (prompt.compare("exit") == 0)
		return (-1);
	prompt_buff << prompt;
	prompt_buff >> ret;
	if (ret == -1)
		ret = 0;
	return (ret);
}