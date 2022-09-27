/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:27:39 by asimon            #+#    #+#             */
/*   Updated: 2022/09/04 09:19:56 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_HPP
# define INT_HPP
# include "header.hpp"
# include "ABase.hpp"

class ABase;

class Int : public ABase
{
	private:
		int		_value;
		
	public:
		Int(char *str);
		Int(void);
		Int(Int const &old);
		~Int();
		std::string		getType() const;
		void			print(std::ostream &to) const;
};

#endif