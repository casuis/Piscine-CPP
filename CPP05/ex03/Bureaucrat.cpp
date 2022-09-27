/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:28:29 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 15:39:22 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
	{
		GradeToHighException e;
		throw (e);
	}
	else if (grade > 150)
	{
		GradeToLowException e;
		throw (e);
	}
	return ;
}

Bureaucrat::Bureaucrat(): _name("jhon"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & old): _name(old._name), _grade(old._grade)
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
}

int		Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

const char	*	Bureaucrat::GradeToHighException::what() const throw()
{
	return ("\t=> Grade to High");
}

const char	*	Bureaucrat::GradeToLowException::what() const throw()
{
	return ("\t=> Grade to Low");
}

void			Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
	{
		GradeToHighException		e;
		throw (e);
	}
	else
		this->_grade--;
	return ;
}

void			Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
	{
		GradeToLowException		e;
		throw (e);
	}
	else
		this->_grade++;
	return ;
}

void		Bureaucrat::signeForm(AForm * form)
{
	if (form == NULL)
	{
		std::cout << this->_name << " has no Form" << std::endl;
		return ;
	}
	try
	{
		form->beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't signed " << form->getName() << " cause " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << form->getName() << std::endl;
}

void			Bureaucrat::executeForm(AForm  * form)
{
	if (form == NULL)
	{
		std::cout << this->_name << " has no Form" << std::endl;
		return ;
	}
	try
	{
		form->execute(*this);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " has executed " << form->getName() << std::endl;
}

Bureaucrat		Bureaucrat::operator=(Bureaucrat &rgt)
{
	this->_grade = rgt._grade;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat &lft)
{
	o << "Name :" << lft.getName() << std::endl << "Grade :" << lft.getGrade() << std::endl;
	return o;
}