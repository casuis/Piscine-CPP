/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:42:41 by asimon            #+#    #+#             */
/*   Updated: 2022/08/23 15:20:42 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iomanip> 
# include <iostream>

class Bureaucrat;

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		int					_signeGrade;
		int					_execGrade;
		
	public:
		AForm(std::string name, int signedGrade, int execGrade);
		AForm(void);
		AForm(AForm & old);
		virtual ~AForm();
		
		std::string		getName() const;
		int				getSigneGrade() const;
		int				getExecGrade() const;
		bool			getSigned() const;
		void			beSigned(Bureaucrat &dude);
		virtual void	execute(Bureaucrat &executor) const;

		class GradeToHighException: public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class GradeToLowException: public std::exception
		{
			public:
				virtual const char *	what() const throw();
		};

		class NonSignedFormException: public std::exception
		{
			public:
				virtual const char	*	what() const throw();
		};
};

std::ostream &		operator<<(std::ostream & o, AForm * rght);

# include "Bureaucrat.hpp"

#endif