/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:42:05 by asimon            #+#    #+#             */
/*   Updated: 2022/09/17 18:23:53 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <string>
# include <iomanip>
# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class	NoMatchError: public std::exception
{
	public:
		virtual const char	*	what() const throw() {return ("No macth has been found\n");}
};

template <typename T>
int		&easyfind(T first, int second)
{
	typename T::iterator			it = first.begin(); 
	typename T::iterator			ite = first.end();
	typename T::iterator			value = std::find(it, ite, second); 


	if (value == ite)
	{
		NoMatchError		e;
		throw (e);
	}
	else
		return (*value);
}

#endif