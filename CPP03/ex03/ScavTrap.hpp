/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:59:30 by asimon            #+#    #+#             */
/*   Updated: 2022/08/04 17:32:48 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include "ClapTrap.hpp"

	class ScavTrap : public virtual ClapTrap
	{
		protected:
			bool		_guardGate;
		public:
			ScavTrap(std::string name);
			ScavTrap(void);
			ScavTrap(ScavTrap const &old);
			void	guardGate();
			void	beRepaired(unsigned int amount);
			void	attack(const std::string &target);
			~ScavTrap();
	};

#endif
