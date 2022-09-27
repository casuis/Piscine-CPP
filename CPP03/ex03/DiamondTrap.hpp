/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 23:31:24 by asimon            #+#    #+#             */
/*   Updated: 2022/08/02 18:14:30 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

	class DiamondTrap: public FragTrap, public ScavTrap
	{
		private:
			std::string		_name;
		public:
			DiamondTrap(std::string name);
			DiamondTrap(DiamondTrap const &old);
			DiamondTrap(void);
			~DiamondTrap();
			void		whoAmI() const;
			void		printData() const;
			void		beRepaired(unsigned int amount);
			void		attack(const std::string & target);
	};

#endif