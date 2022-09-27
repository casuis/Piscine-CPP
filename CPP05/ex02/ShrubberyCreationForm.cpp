/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:06:57 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 13:51:02 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string & target):
AForm("Shrubbery", 145, 137), _target(target)
{
	return ;
}


ShrubberyCreationForm::ShrubberyCreationForm():
AForm("Default Shrubbery", 145, 137), _target("Default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & old):
AForm("Copy Shruberry", 145, 137), _target(old._target)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}


void		ShrubberyCreationForm::execute(Bureaucrat & executor) const
{
	try
	{
		AForm::execute(executor);
	}
	catch (std::exception &e)
	{
		throw;
	}
	std::ofstream		ostream;
	ostream.exceptions(std::ofstream::failbit);
	try
	{
		ostream.open(this->_target.c_str(), std::ofstream::out | std::ofstream::app);
	}
	catch (const std::ofstream::failure &e)
	{
		throw (e);
	}
	ostream << "                     ___" << std::endl;
	ostream << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
	ostream << "             ,-'          __,,-- \\ " << std::endl;
	ostream << "           ,'    __,--\"\"\"\"dF      )" << std::endl;
	ostream << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
	ostream << "        ,'       _Hb ___dF\"-._,-'" << std::endl;
	ostream << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
	ostream << "     (     ,-'                  `." << std::endl;
	ostream << "      `._,'     _   _             ;" << std::endl;
	ostream << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
	ostream << "       \\    ,'\"Hb.-'HH`-.dHF\"" << std::endl;
	ostream << "        `--'   \"Hb  HH  dF\"" << std::endl;
	ostream << "                \"Hb HH dF" << std::endl;
	ostream << "                 \"HbHHdF" << std::endl;
	ostream << "                  |HHHF" << std::endl;
	ostream << "                  |HHH|" << std::endl;
	ostream << "                  |HHH|" << std::endl;
	ostream << "                  |HHH|" << std::endl;
	ostream << "                  |HHH|" << std::endl;
	ostream << "                  dHHHb" << std::endl;
	ostream << "                .dFd|bHb.               o" << std::endl;
	ostream << "      o       .dHFdH|HbTHb.          o /" << std::endl;
	ostream << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__       Y" << std::endl;
	ostream << "##########################################" << std::endl;
	ostream.close();
}

ShrubberyCreationForm	&	ShrubberyCreationForm::operator=(ShrubberyCreationForm & rh)
{
	std::cout << "Operator = in Shrubbery" << std::endl;
	this->_target = rh._target;
	return (*this);
}