/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:01:08 by asimon            #+#    #+#             */
/*   Updated: 2022/08/07 02:30:58 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
	protected:
		std::string		_idea[100];
	public:
		Brain();
		Brain(Brain const & old);
		void		setIdea(std::string idea, int idx);
		std::string	getIdea(int idx);
		~Brain();
};

#endif