/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:38:05 by asimon            #+#    #+#             */
/*   Updated: 2022/08/07 02:58:53 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <string>
# include <iostream>
# include <iomanip>

class AAnimal
{
	protected:
		std::string		type;

		void		setType(std::string const type);
	private:

	public:
		std::string	getType() const;
		AAnimal(std::string type);
		AAnimal(void);
		AAnimal(AAnimal const &old);
		virtual ~AAnimal();
		virtual void		makeSound() const = 0;
};

#endif