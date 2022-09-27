/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:04:30 by asimon            #+#    #+#             */
/*   Updated: 2022/08/02 17:35:25 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): 
_name(name), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "Hey! welcome on pandora, I'm " << this->_name << " | ClapTrap constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(void):
_name("Jack"), _hitPts(10), _energyPts(10), _attackDmg(0)
{
	std::cout << "Hey! welcome on pandora, I'm " << this->_name << " | Default" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &old)
{
	this->_name = old._name;
	this->_hitPts = old._hitPts;
	this->_attackDmg = old._attackDmg;
	this->_energyPts = old._energyPts;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "This is the end of the story of our brave " << this->_name << " | ClapTrap Destructor" << std::endl;
	return ;
}

void			ClapTrap::attack(const std::string &target)
{
	if (this->_energyPts != 0 && this->_hitPts > 0)
	{
		std::cout << "WAIT! ClapTrap(" << this->_name << ") comming for a hit! " << target << " has taken " << this->_attackDmg << " dmg" << std::endl;
		this->_energyPts--;
	}
	else
		std::cout << "Let this poor " << this->_name << " rest for god damn sake!" << std::endl;
	return ;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPts > 0)
	{
		std::cout << "ClapTrap aka: " << this->_name << " has taken " << amount << " dmg" << std::endl;
		this->_hitPts -= amount;
		if (this->_hitPts < 0)
			this->_hitPts = 0;
	}
	else
		std::cout << "Man " << this->_name << " is allready dead chill!" << std::endl;
	return ;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPts != 0 && this->_hitPts > 0)
	{
		std::cout << "ClapTrap aka: " << this->_name << " momantanly repairing... + " << amount << "HP!" << std::endl;	
		this->_hitPts += amount;
		if (this->_hitPts > 10)
			this->_hitPts = 10;
		this->_energyPts--;
	}
	else
		std::cout << "I don't think Claptrap aka: " << this->_name <<  " is able to do that right now" << std::endl;
	return ;
}

void			ClapTrap::setAttackDmg(unsigned int value)
{
	this->_attackDmg = value;
	return ;
}

void			ClapTrap::setEnergyPts(unsigned int value)
{
	this->_energyPts = value;
	return ;
}

void			ClapTrap::setHitPts(unsigned int value)
{
	this->_hitPts = value;
	return ;
}

unsigned int	ClapTrap::getAttackDmg() const
{
	return (this->_attackDmg);
}

unsigned int	ClapTrap::getEnergyPts() const
{
	return (this->_energyPts);
}

std::string		ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPts() const
{
	return (this->_hitPts);
}

void			ClapTrap::printData() const
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "HP: " << this->_hitPts << std::endl;
	std::cout << "Energy: " << this->_energyPts << std::endl;
	std::cout << "DMG: " << this->_attackDmg << std::endl;
	std::cout << std::endl;
}