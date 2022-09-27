/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:09:19 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 15:09:21 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_HPP
# define DOUBLE_HPP
# include "header.hpp"
# include "ABase.hpp"

class Double: public ABase
{
	private:
		double		_value;
	public:
		Double(char *str);
		Double(void);
		Double(Double const &old);
		~Double();
		std::string		getType() const;
		void			print(std::ostream &to) const;
};

std::ostream	&		operator<<(std::ostream &o, Double *rgt);


#endif