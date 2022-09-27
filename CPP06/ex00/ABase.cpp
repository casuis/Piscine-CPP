/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:01:57 by asimon            #+#    #+#             */
/*   Updated: 2022/09/01 13:17:45 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABase.hpp"

ABase::ABase(std::string type): type(type)
{
	return ;
}

ABase::~ABase()
{
	return ;
}

const char	*		ABase::NullStr::what() const throw()
{
	return ("Argument is empty\n");
}

const char	*		ABase::NonPrintable::what() const throw()
{
	return ("Non Printable\n");
}

const char	*		ABase::OutOfRangeInt::what() const throw()
{
	return ("Value out of range\n");
}

const char	*		ABase::ErrorArgument::what() const throw()
{
	return ("impossible\n");
}


const char	*		ABase::Error::what() const throw()
{
	return ("error\n");
}

std::string		ABase::getType() const
{
	return (this->type);
}

std::ostream &		operator<<(std::ostream &o, const ABase *obj)
{
	obj->print(o);
	return (o);
}