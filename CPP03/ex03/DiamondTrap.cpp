/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:30:52 by asimon            #+#    #+#             */
/*   Updated: 2022/08/02 18:20:53 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "| Diamond constructor" << std::endl;
	this->setAttackDmg(this->FragTrap::getAttackDmg());
	this->setEnergyPts(this->ScavTrap::getEnergyPts());
	this->setHitPts(this->FragTrap::getHitPts());
	this->printData();
	return ;
}

DiamondTrap::DiamondTrap(void): ClapTrap("Jack_clap_name"), FragTrap("Jack_clap_name"), ScavTrap("Jack_clap_name")
{
	std::cout << "| Diamond Default Constructor" << std::endl;
	this->_name = "Jack";
	this->setAttackDmg(this->FragTrap::getAttackDmg());
	this->setEnergyPts(this->ScavTrap::getEnergyPts());
	this->setHitPts(this->FragTrap::getHitPts());
	this->printData();
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &old):
ClapTrap(old.getName()), FragTrap(old.getName()), ScavTrap(old.getName()), _name(old._name)
{
	std::cout << "| Diamond Copy Constructor" << std::endl;
	this->_name = "Jack";
	this->setAttackDmg(this->FragTrap::getAttackDmg());
	this->setEnergyPts(this->ScavTrap::getEnergyPts());
	this->setHitPts(this->FragTrap::getHitPts());
	this->printData();
	return ;

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "| Desutructor Diamond" << std::endl;
	return ;
}

void		DiamondTrap::printData() const
{
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "HP: " << ClapTrap::getHitPts() << std::endl;
	std::cout << "Energy: " << ClapTrap::getEnergyPts() << std::endl;
	std::cout << "DMG: " << ClapTrap::getAttackDmg() << std::endl;
	std::cout << std::endl;
	return ;
}

void		DiamondTrap::whoAmI() const
{
	std::cout << "ClapTrap Name: " << ClapTrap::getName() << std::endl;
	std::cout << "DiamondTrap Name: " << this->_name << std::endl;
	return ;
}

void		DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
	return ;
}

void		DiamondTrap::beRepaired(unsigned int amount)
{
	FragTrap::beRepaired(amount);
	return ;
}