/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:10:59 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:14:54 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "header.hpp"
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		~Cure();
		void		use(ICharacter& target);
		AMateria	*clone() const;
		Cure	&	operator=(Cure & rh);
};
 
# include "ICharacter.hpp" 
#endif
