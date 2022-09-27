/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:28:08 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 15:06:40 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Int.hpp"

Int::Int(char *value): ABase("Int")
{
	if ((((*value > '9' || *value < '0') && *value != '-') && atof(value) != 0)
	|| (strlen(value) > 1 && atof(value) == 0))
	{
		ABase::ErrorArgument	e;
		throw (e);
		return ;
	}
	if (atof(value) != 0 || value[0] == '0')
		this->_value = static_cast<int>(atof(value));
	else
		this->_value = static_cast<int>(value[0]);
	return ;
}

Int::Int(): ABase("Default int"), _value(0)
{
	return;
}

Int::Int(Int const &old): ABase("Copy int"), _value(old._value)
{
	return;
}

Int::~Int()
{
	return ;
}

void	Int::print(std::ostream &to) const
{
	to << this->_value;
	return ;
}