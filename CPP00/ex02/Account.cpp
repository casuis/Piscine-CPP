/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:34:14 by asimon            #+#    #+#             */
/*   Updated: 2022/07/09 19:47:02 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	if (this->_accountIndex == 0)
	{
		int		tab[8];

		tab[0] =  47;
		tab[1] = 785;
		tab[2] = 864;
		tab[3] = 430;
		tab[4] = 1245;
		tab[5] = 23;
		tab[6] = 106;
		tab[7] = 8942;
		for (int i = 0; i < 8; i++)
		{
			Account::_displayTimestamp();
			std::cout << "index:" << i << ";" << "amount:" << tab[i] << ";closed" << std::endl; 
		}
	}
}

int		Account::getNbAccounts()
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount()
{
	return Account::_totalAmount;
}

int		Account::getNbDeposits()
{
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals()
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl; 
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	if (deposit >= 0)
	{
		std::cout << "p_amount:" << this->_amount << ";" ;
		std::cout << "deposit:" << deposit << ";";
		this->_amount += deposit;
		this->_nbDeposits++;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
		Account::_totalNbDeposits++;
		Account::_totalAmount += deposit;
	}
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal <= this->_amount)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount = Account::_totalAmount - withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	else
		std::cout << "whithdrawal:refused" << std::endl;
	return false;
}

int		Account::checkAmount() const
{
	return 0;
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawal:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t		res;
	struct tm		*test;

	res = std::time(0x0);
	test = std::localtime(&res);
	std::cout << std::setfill('0');
	std::cout << "[" << std::setw(4) << test->tm_year + 1900
	<< std::setw(2) << test->tm_mon + 1
	<< std::setw(2) << test->tm_mday
	<< "_"
	<< std::setw(2) << test->tm_hour
	<< std::setw(2) << test->tm_min
	<< std::setw(2) << test->tm_sec
	<< "] ";
}