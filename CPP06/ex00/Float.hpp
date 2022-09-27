/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:13:27 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 15:09:22 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOAT_HPP
# define FLOAT_HPP
# include "header.hpp"
# include "ABase.hpp"

class Float: public ABase
{
	private:
		float			_value;
	public:
		Float(char *str);
		Float(void);
		Float(Float const &old);
		~Float();
		std::string		getType() const;
		void			print(std::ostream &to) const;
};

#endif