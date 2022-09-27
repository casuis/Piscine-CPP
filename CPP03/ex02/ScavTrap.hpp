/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 14:59:30 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 18:29:43 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include <iomanip>
# include <fstream>
# include "ClapTrap.hpp"

	class ScavTrap : public ClapTrap
	{
		private:
			bool		_guardGate;
		public:
			ScavTrap(std::string name);
			ScavTrap(ScavTrap const &old);
			ScavTrap(void);
			void	guardGate();
			void	beRepaired(unsigned int amount);
			void	attack(std::string const & target);
			~ScavTrap();
	};

#endif
