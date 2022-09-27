/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:59:17 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 18:30:45 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _guardGate(false)
{
	std::cout << "ScavTrap " << this->getName() << " | Constructor" << std::endl;
	this->_attackDmg = 20;
	this->setEnergyPts(50);
	this->setHitPts(100);
	this->printData();
	return ;
}

ScavTrap::ScavTrap(void): ClapTrap(), _guardGate(false)
{
	std::cout << "ScavTrap " << this->getName() << " | Default Constructor" << std::endl;
	this->setAttackDmg(20);
	this->setEnergyPts(50);
	this->setHitPts(100);
	this->printData();
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &old): ClapTrap(old.getName()), _guardGate(old._guardGate)
{
	std::cout << "ScavTrap " << this->getName() << " | Copy Constructor" << std::endl;
	this->setAttackDmg(old.getAttackDmg());
	this->setEnergyPts(old.getEnergyPts());
	this->setHitPts(old.getHitPts());
	this->printData();
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << std::endl << "ScavTrap " << this->getName() << " Destructor" << std::endl;
	this->printData();
	return ;
}

void	ScavTrap::guardGate()
{
	if (this->_guardGate == false)
	{
		this->_guardGate = true;
		std::cout << "ScavTrap " << this->getName() << " is in guard mode" << std::endl;
	}
	else
	{
		this->_guardGate = false;
		std::cout << "ScavTrap " << this->getName() << " is not any more in guard mode" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPts() != 0 && this->getHitPts() > 0)
	{
		std::cout << "ScavTrap aka: " << this->getName() << " momantanly repairing... + " << amount << "HP!" << std::endl;	
		this->setHitPts(this->getHitPts() + amount);
		if (this->getHitPts() > 100)
			this->setHitPts(100);
		this->setEnergyPts(this->getEnergyPts() - 1);
	}
	else
		std::cout << "I don't think Claptrap aka: " << this->getName() <<  " is able to do that right now" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap attack " << target << " and deal " << this->_attackDmg << " DMG" <<  std::endl;
	return ;
}
