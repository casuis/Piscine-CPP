/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:00:48 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 17:53:28 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "|Brain Constructor|" << std::endl;
	for (int	i = 0; i < 100; i++)
	{
		this->_idea[i] = "idea";
	}
	return ;
}

Brain::Brain(Brain const & old)
{
	std::cout << "|Copy Brain Constructor|" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_idea[i] = old._idea[i];
	}
	return ;
}

Brain::~Brain()
{
	std::cout << "|Brain Destructor|" << std::endl;
	std::cout << std::endl;
	return ;
}

void			Brain::setIdea(std::string idea, int idx)
{
	this->_idea[idx] = idea;
	return ;
}

std::string		Brain::getIdea(int idx)
{
	return (this->_idea[idx]);
}