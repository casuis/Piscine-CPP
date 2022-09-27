/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:40 by asimon            #+#    #+#             */
/*   Updated: 2022/08/07 00:34:51 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain		*_id;
	public:
		Dog(void);
		Dog(Dog const &old);
		virtual ~Dog();

		void	makeSound() const;
		Dog		operator=(Dog &rh);
};

#endif

