/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:03:08 by asimon            #+#    #+#             */
/*   Updated: 2022/08/04 17:32:16 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP
# include <string>
# include <iostream>
# include <iomanip>
	class ClapTrap
	{
		protected:
			std::string		_name;
			int				_hitPts;
			int				_energyPts;
			int				_attackDmg;
		public:
			ClapTrap(std::string name);
			ClapTrap(void);
			ClapTrap(ClapTrap const &old);
			~ClapTrap();
			void				attack(const std::string & tagrget);
			void				takeDamage(unsigned int amount);
			void				beRepaired(unsigned int amount);
			void				setAttackDmg(unsigned int amount);
			void				setHitPts(unsigned int amount);
			void				setEnergyPts(unsigned int amount);
			std::string			getName() const;
			unsigned int		getHitPts() const;
			unsigned int		getEnergyPts() const;
			unsigned int		getAttackDmg() const;
			void				printData() const;
	};
	
#endif

