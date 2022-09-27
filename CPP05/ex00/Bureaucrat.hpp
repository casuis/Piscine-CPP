/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:29:04 by asimon            #+#    #+#             */
/*   Updated: 2022/08/18 12:00:58 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iomanip>
# include <iostream>

class Bureaucrat
{
	private:
		std::string const 	_name;
		int					_grade;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(void);
		Bureaucrat(Bureaucrat const &old);
		~Bureaucrat();

		class GradeToHighException: public std::exception
		{
			virtual const char *	what() const throw();
		};
		
		class GradeToLowException: public std::exception
		{
			virtual const char *	what() const throw();
		};

		std::string		getName() const;
		int				getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		Bureaucrat		operator=(Bureaucrat &rgt);
};

std::ostream	&operator<<(std::ostream &lft, Bureaucrat &rght);

#endif