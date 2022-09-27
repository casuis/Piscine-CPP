/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:37:45 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 16:18:46 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int MateriaSource::_iter  = 0;

MateriaSource::MateriaSource()
{
	return ;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < MateriaSource::_iter; i++)
	{
		delete this->_type[i];
	}
	return ;
}

void		MateriaSource::learnMateria(AMateria *obj)
{
	if (MateriaSource::_iter < 4)
	{
		this->_type[MateriaSource::_iter] = obj;
		MateriaSource::_iter++;
	}
	else
		std::cout << "* ERROR 4 Materia allready learned *" << std::endl;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	AMateria		*ret = 0;

	for (int	i = 0; i < 4; i++)
	{
		if (this->_type[i]->getType().compare(type) == 0)
			return (ret = this->_type[i]->clone());
	}
	return (ret);
}

void		MateriaSource::showAll() const
{
	for (int i = 0; i < MateriaSource::_iter; i++)
	{
		std::cout << "Materia Source : | " << i << " | - " << this->_type[i]->getType() << std::endl; 
	}
}