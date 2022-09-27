/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 03:39:18 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:10:31 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "header.hpp"

class AMateria
{
	protected:
		std::string		type;
		static Floor	floor;
		
	public:
		AMateria(std::string const & type);
		AMateria(void);
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

# include "Floor.hpp"
# include "ICharacter.hpp"

#endif