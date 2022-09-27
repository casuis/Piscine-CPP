/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:14:24 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 15:08:43 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_CPP
# define CHAR_CPP
# include "header.hpp"
# include "ABase.hpp"

class Char: public ABase
{
	private:
		int		_value;
	public:
		Char(char *str);
		Char(void);
		Char(Char const &old);
		~Char();
		std::string		getType() const;
		void			print(std::ostream &to) const;
};

#endif