/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tab.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:35:28 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 15:15:27 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tab.hpp"

int		Tab::_tabSize = 4;

Tab::Tab(char *str)
{
	for (int i = 0; i < this->_tabSize; i++)
	{
		switch (i)
		{
			case 0:
				std::cout << "char: ";
				try {this->_tab[i] = new Char(str);}
				catch (std::exception &e)
				{
					this->_tab[i] = NULL;
					std::cout << e.what();
					break;
				}
				std::cout << this->_tab[i] <<  std::endl;
				break;
			case 1:
				std::cout << "int: ";
				try {this->_tab[i] = new Int(str);}
				catch (std::exception &e) 
				{
					this->_tab[i] = NULL;
					std::cout << e.what();
					break;
				}
				std::cout << this->_tab[i] <<  std::endl;
				break;
			case 2:
				std::cout << "float: ";
				try {this->_tab[i] = new Float(str);}
				catch (std::exception &e) 
				{
					this->_tab[i] = NULL;
					std::cout << e.what();
					break;
				}
				std::cout << this->_tab[i];
				std::cout << "f" << std::endl;
				break;
			case 3:
				std::cout << "double: ";
				try {this->_tab[i] = new Double(str);}
				catch (std::exception &e) 
				{
					this->_tab[i] = NULL;
					std::cout << e.what();
					break;
				}
				std::cout << this->_tab[i] <<  std::endl;
				std::cout << std::endl;
				break;
			default:
				std::cout << "Default Error" << std::endl;
				break;
		}
	}
	return ;
}

Tab::Tab()
{
	return ;
}

Tab::Tab(Tab &old)
{
	for (int i = 0; i < this->_tabSize; i++)
	{
		this->_tab[i] = old._tab[i];
		old._tab[i] = NULL;
	}
	return ;
}

Tab::~Tab()
{
	for (int i = 0; i < Tab::_tabSize; i++)
	{
		if (this->_tab[i] != NULL)
			delete this->_tab[i];
	}
	return ;
}
