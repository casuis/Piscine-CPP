/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:42:41 by asimon            #+#    #+#             */
/*   Updated: 2022/08/18 13:58:28 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iomanip> 
# include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int					_signeGrade;
		int					_execGrade;
		
	public:
		Form(std::string name, int signedGrade, int execGrade);
		Form(void);
		Form(Form & old);
		~Form();
		
		std::string		getName() const;
		int				getSigneGrade() const;
		int				getExecGrade() const;
		bool			getSigned() const;
		void			beSigned(Bureaucrat &dude);

		class GradeToHighException: public std::exception
		{
			virtual const char *	what() const throw();
		};

		class GradeToLowExecption: public std::exception
		{
			virtual const char *	what() const throw();
		};
};

std::ostream &		operator<<(std::ostream & o, Form & rght);

# include "Bureaucrat.hpp"

#endif