/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:14:53 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 15:08:27 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"

Char::Char(char *str): ABase("char")
{
	if (((strlen(str) > 1) && (*str < '0' || *str >'9')) || atof(str) < 0  || atof(str) > 127)
	{
		ABase::ErrorArgument		e;
		throw (e);
		return ;
	}
	if (*str >= '0' && *str <= '9' && (atof(str) <= 31 || atof(str) >= 127))
	{
		ABase::NonPrintable		e;

		throw (e);
		return ;
	}
	if (atof(str) > 0)
		this->_value = atof(str);
	else
		this->_value = static_cast<int>(*str);
	return ;
}

Char::Char(): ABase("default char")
{
	this->_value = 0;
	return ;
}

Char::Char(Char const &old): ABase("Copy char"), _value(old._value)
{
	return ;
}

Char::~Char()
{
	return ;
}

void		Char::print(std::ostream &to) const
{
	to << "\'" << static_cast<char>(this->_value) << "\'";
	return ;
}