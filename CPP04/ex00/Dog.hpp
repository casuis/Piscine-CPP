/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:40 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:22:33 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const &old);
		virtual ~Dog();

		void	makeSound() const;
		Dog	&	operator=(Dog & rh);
};

#endif

