/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:43:11 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 15:22:33 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"


AForm::AForm(std::string name, int signedGrade, int execGrade):
_name(name), _signed(false), _signeGrade(signedGrade), _execGrade(execGrade)
{
	if (signedGrade < 1 || execGrade < 1)
	{
		GradeToHighException e;
		throw (e);
	}
	if (signedGrade > 150 || execGrade > 150)
	{
		GradeToLowException e;
		throw (e);
	}
	return ;
}

AForm::AForm():
_name("jhon"),  _signed(false), _signeGrade(150), _execGrade(1)
{
	return ;
}

AForm::AForm(AForm & old): 
_name(old._name),  _signed(old._signed), _signeGrade(old._signeGrade), _execGrade(old._execGrade)
{
	return ;
}

AForm::~AForm()
{
	return ;
}

std::string			AForm::getName() const
{
	return (this->_name);
}

int			AForm::getExecGrade() const
{
	return (this->_execGrade);
}

int			AForm::getSigneGrade() const
{
	return (this->_signeGrade);
}

bool		AForm::getSigned() const
{
	return (this->_signed);
}

void		AForm::beSigned(Bureaucrat & dude)
{
	if (dude.getGrade() > this->_signeGrade)
	{
		GradeToLowException		e;
		throw (e);
	}
	else
		this->_signed = true;
}

void		AForm::execute(Bureaucrat & executor) const
{
	if (this->getSigned() == 0)
	{
		NonSignedFormException		e;
		throw	(e);
		return ;
	}
	else if (this->_execGrade < executor.getGrade())
	{
		GradeToLowException		e;
		throw (e);
		return ;
	}
}

const char	*		AForm::GradeToHighException::what() const throw()
{
	return ("Grade to high for AForm");
}

const char	*		AForm::GradeToLowException::what() const throw()
{
	return ("Grade to low for AForm");
}

const char	*		AForm::NonSignedFormException::what() const throw()
{
	return ("Unsigned Form");
}

std::ostream &		operator<<(std::ostream & o, AForm *rght)
{
	if (rght == NULL)
	{
		o << "Form = NULL" << std::endl;
		return (o);
	}
	o << "Form name: " << rght->getName() << std::endl
	<< "Form signe grade: " << rght->getSigneGrade() << std::endl
	<< "Form exec grade: " << rght->getExecGrade() << std::endl
	<< "Form signed: " << rght->getSigned() << std::endl;
	return (o);
}
