/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:14:04 by asimon            #+#    #+#             */
/*   Updated: 2022/09/04 09:33:05 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Float.hpp"

Float::Float(char *str): ABase("float")
{
	if ((str[0] > '9' || str[0] < '0') && atof(str) == 0 && *str != '-' && strlen(str) > 1)
	{
		ABase::ErrorArgument	e;
		throw (e);
		return ;
	}
	if (atof(str) != 0 || str[0] == '0')
		this->_value = static_cast<float>(atof(str));
	else
		this->_value = static_cast<float>(str[0]);
	return ;
}

Float::Float(): ABase("Default float"), _value(0)
{
	return ;
}

Float::Float(Float const &old): ABase("Copy float"), _value(old._value)
{
	return ;
}

Float::~Float()
{
	return ;
}


void		Float::print(std::ostream &to) const
{
	std::stringstream		ss;
	std::string				tmp;
	size_t					pos_inf;
	size_t					pos_dot;
	
	ss << this->_value;
	ss >> tmp;
	pos_inf = tmp.find("inf");
	pos_dot = tmp.find(".");
	to << this->_value;
	if (tmp.compare("nan") && pos_inf == std::string::npos && pos_dot == std::string::npos)
		to << ".0";
	return ;
}
