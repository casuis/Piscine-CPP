/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:51:14 by asimon            #+#    #+#             */
/*   Updated: 2022/08/04 17:32:57 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(void);
		FragTrap(FragTrap const &old);
		~FragTrap();
		void		highFivesGuys(void);
		void		beRepaired(unsigned int amount);
		size_t		getAttackDmg() const;
};

#endif