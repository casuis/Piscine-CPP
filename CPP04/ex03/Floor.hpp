/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:29:52 by asimon            #+#    #+#             */
/*   Updated: 2022/08/16 18:05:34 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP
# include "header.hpp"

class Floor
{
	private:
		AMateria const	*_obj[142];
		static int		_idx;
	public:
		Floor();
		~Floor();
		void addNewObj(AMateria const *next);
};

# include "AMateria.hpp"

#endif