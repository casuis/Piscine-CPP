/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:52:09 by asimon            #+#    #+#             */
/*   Updated: 2022/08/22 18:35:23 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
# define PRESIDENTIAL_HPP
# include "header.hpp"
# include "Form.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		std::string		_target;
	public:
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm &old);
		~PresidentialPardonForm();
		void		execute(Bureaucrat &executor) const;
};

# include "Bureaucrat.hpp"
#endif