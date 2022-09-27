/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:43:11 by asimon            #+#    #+#             */
/*   Updated: 2022/08/18 16:11:01 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"


Form::Form(std::string name, int signedGrade, int execGrade):
_name(name), _signed(false), _signeGrade(signedGrade), _execGrade(execGrade)
{
	if (signedGrade < 1 || execGrade < 1)
	{
		GradeToHighException e;
		throw (e);
	}
	if (signedGrade > 150 || execGrade > 150)
	{
		GradeToLowExecption e;
		throw (e);
	}
	return ;
}

Form::Form():
_name("jhon"),  _signed(false), _signeGrade(150), _execGrade(1)
{
	return ;
}

Form::Form(Form & old): 
_name(old._name),  _signed(old._signed), _signeGrade(old._signeGrade), _execGrade(old._execGrade)
{
	return ;
}

Form::~Form()
{
	return ;
}

std::string			Form::getName() const
{
	return (this->_name);
}

int			Form::getExecGrade() const
{
	return (this->_execGrade);
}

int			Form::getSigneGrade() const
{
	return (this->_signeGrade);
}

bool		Form::getSigned() const
{
	return (this->_signed);
}

void		Form::beSigned(Bureaucrat & dude)
{
	if (dude.getGrade() > this->_signeGrade)
	{
		GradeToLowExecption		e;
		throw (e);
	}
	else
		this->_signed = true;
}

const char	*		Form::GradeToHighException::what() const throw()
{
	return ("Grade to high for Form");
}

const char	*		Form::GradeToLowExecption::what() const throw()
{
	return ("Grade to low for Form");
}

std::ostream &		operator<<(std::ostream & o, Form &rght)
{
	o << "Form name: " << rght.getName() << std::endl
	<< "Form signe grade: " << rght.getSigneGrade() << std::endl
	<< "Form exec grade: " << rght.getExecGrade() << std::endl
	<< "Form signed: " << rght.getSigned() << std::endl;
	return (o);
}