/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:34:20 by asimon            #+#    #+#             */
/*   Updated: 2022/08/16 12:55:35 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

int Floor::_idx = 0;

Floor::Floor()
{
	return ;
}

Floor::~Floor()
{
	for (int i = 0; i < 142 && i < Floor::_idx; i++)
	{
		if (this->_obj[i] != NULL)
			delete this->_obj[i];
		else
			break;
	}
	return ;
}

void		Floor::addNewObj(AMateria const *next)
{
	this->_obj[Floor::_idx] = next;
	Floor::_idx++;
	return ;
}