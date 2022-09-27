/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:33 by asimon            #+#    #+#             */
/*   Updated: 2022/08/07 00:35:03 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain		*_id;
	public:
		Cat(Cat const &old);
		Cat(void);
		virtual ~Cat();
		
		void	makeSound() const;
		Cat		operator=(Cat &rh);
};

#endif