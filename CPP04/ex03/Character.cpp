/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:31:18 by asimon            #+#    #+#             */
/*   Updated: 2022/08/16 12:55:33 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Floor	Character::_floor = Floor();

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_invent[i] = NULL;
	return ;
}

Character::Character(): _name("Jhon")
{
	for (int i = 0; i < 3 && this->_invent[i] != NULL; i++)
	{
		delete this->_invent[i];
	}
	return ;
}

Character::Character(Character &old): _name(old._name)
{
	AMateria	*tmp;

	for (int i = 0; i < 4 ; i++)
	{
		if (old._invent[i] != NULL)
		{
			tmp = old._invent[i]->clone();
			delete old._invent[i];
			old._invent[i] = NULL;
			this->_invent[i] = tmp;
		}
		else
			this->_invent[i] = NULL;
	}
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4 && this->_invent[i] != NULL; i++)
	{
		delete this->_invent[i];
	}
	return ;
}

void		Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_invent[i] == m)
		{
			std::cout << m->getType() << " allready equiped" << std::endl;
			return;
		}
		if (this->_invent[i] == NULL)
		{
			this->_invent[i] = m;
			return ;
		}
	}
	std::cout << "Inventory Full" << std::endl;
	return ;
}

void		Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Error Index" << std::endl;
		return ;
	}
	for (int i = 0; i < 4 && this->_invent[i] != NULL; i++)
	{
		if (i == idx)
		{
			this->_floor.addNewObj(this->_invent[i]);
			this->_invent[i] = NULL;
		}
	}
	return ;
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		std::cout << "Error index" << std::endl;
	for (int i = 0; i < 4 && this->_invent[i] != NULL; i++)
	{
		if (i == idx)
			this->_invent[i]->use(target);
	}
	return ;
}

std::string	const &	Character::getName() const
{
	return (this->_name);
}

Character		Character::operator=(Character & rh)
{
	AMateria	*tmp;

	rh._name = this->_name;
	for (int i = 0; i < 4 ; i++)
	{
		if (rh._invent[i] != NULL)
		{
			tmp = rh._invent[i]->clone();
			delete rh._invent[i];
			rh._invent[i] = NULL;
			this->_invent[i] = tmp;
		}
		else
			this->_invent[i] = NULL;
	}
	return (rh);
}

void		Character::showInv() const
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_invent[i] != NULL)
			std::cout << this->_name << "'s inventory | " << i << " | - " << this->_invent[i]->getType() << std::endl;
		else
			std::cout << this->_name << "'s inventory | " << i << " | - (empty)" << std::endl;
	}
}