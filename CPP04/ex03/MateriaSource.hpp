/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:42:51 by asimon            #+#    #+#             */
/*   Updated: 2022/08/17 16:16:13 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "header.hpp"
# include "IMateriaSource.hpp" 

class MateriaSource: public IMateriaSource
{
	private:
		AMateria		*_type[4];
		static	int		_iter;
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		void		showAll() const;
};

# include "AMateria.hpp"
#endif