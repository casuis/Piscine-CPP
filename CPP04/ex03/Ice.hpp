/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:08:24 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:13:18 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "header.hpp"
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &old);
		~Ice();
		void		use(ICharacter& target);
		AMateria*	clone() const;
		Ice	&		operator=(Ice & rh);
};

# include "ICharacter.hpp"

#endif