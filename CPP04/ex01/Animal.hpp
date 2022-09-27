/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:05 by asimon            #+#    #+#             */
/*   Updated: 2022/08/07 02:42:45 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>
# include <iomanip>

class Animal
{
	protected:
		std::string		type;

		void		setType(std::string const type);
	private:

	public:
		std::string	getType() const;
		Animal(std::string type);
		Animal(void);
		Animal(Animal const &old);
		virtual ~Animal();
		virtual void		makeSound() const;
};

#endif