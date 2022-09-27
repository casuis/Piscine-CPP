/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:53:07 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 12:52:34 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_HPP
# define SHRUBERRY_HPP
# include "header.hpp"
# include "Form.hpp" 

class ShrubberyCreationForm : public AForm
{
	private:
		std::string		_target;
	public:
		ShrubberyCreationForm(std::string & target);
		ShrubberyCreationForm(ShrubberyCreationForm & old);
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm();
		void		execute(Bureaucrat & executor) const;
		ShrubberyCreationForm	&	operator=(ShrubberyCreationForm & rh);
};


#endif