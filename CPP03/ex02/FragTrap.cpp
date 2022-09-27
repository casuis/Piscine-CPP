/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:51:03 by asimon            #+#    #+#             */
/*   Updated: 2022/08/02 18:07:36 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap " << this->getName() << " | Constructor" << std::endl;
	this->setAttackDmg(30);
	this->setEnergyPts(100);
	this->setHitPts(100);
	this->printData();
	return ;
}

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap " << this->getName() << " | Default constructor" << std::endl;
	this->setAttackDmg(30);
	this->setEnergyPts(100);
	this->setHitPts(100);
	this->printData();
	return ;
}

FragTrap::FragTrap(FragTrap const &old): ClapTrap(old.getName())
{
	std::cout << "FragTrap " << this->getName() << " | Copy constructor" << std::endl;
	this->setAttackDmg(old.getAttackDmg());
	this->setEnergyPts(old.getEnergyPts());
	this->setHitPts(old.getHitPts());
	this->printData();
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << std::endl << "FragTrap " << this->getName() << " | Destructor" << std::endl;
	this->printData();
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergyPts() != 0 && this->getHitPts() > 0)
	{
		std::cout << "FragTrap aka: " << this->getName() << " momantanly repairing... + " << amount << "HP!" << std::endl;	
		this->setHitPts(this->getHitPts() + amount);
		if (this->getHitPts() > 100)
			this->setHitPts(100);
		this->setEnergyPts(this->getEnergyPts() - 1);
	}
	else
		std::cout << "I don't think Claptrap aka: " << this->getName() <<  " is able to do that right now" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::string		prompt;
	std::cout << this->getName() << " seems to want to make an high Five..." << std::endl;
	std::cout << "Accept ? [Y/n] : ",
	std::getline(std::cin, prompt);
	if (std::cin.eof() == true)
		std::cout << "true" << std::endl;
	if (prompt.compare("Y") == 0|| prompt.compare("") == 0 || prompt.compare("y") == 0)
		std::cout << "HIGH FIVE! " << this->getName() << " seems happy" << std::endl;
	else if (prompt.compare("n") == 0)
		std::cout << this->getName() << " look sad, weird little guy..." << std::endl;
	else
	{
		std::cout << "We can't understant, so " << this->getName() << " does... try laterz" << std::endl;
	}
	return ;
}
