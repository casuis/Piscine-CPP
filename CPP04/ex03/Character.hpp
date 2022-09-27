/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:30:14 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 16:14:21 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "header.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_invent[4];
		static Floor	_floor;
	public:
		Character(std::string name);
		Character(void);
		Character(Character  & old);
		virtual ~Character();
		std::string const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		Character			operator=(Character & rh);
		void				showInv() const;
};

# include "AMateria.hpp"

#endif
