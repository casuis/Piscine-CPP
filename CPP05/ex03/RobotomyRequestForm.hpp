/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:52:40 by asimon            #+#    #+#             */
/*   Updated: 2022/08/22 18:15:04 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP
# include "header.hpp"
# include "Form.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string		_target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm & old);
		~RobotomyRequestForm();
		void	execute(Bureaucrat & executor) const;
		RobotomyRequestForm	&		operator=(RobotomyRequestForm &rh);
};

# include "Bureaucrat.hpp"
#endif