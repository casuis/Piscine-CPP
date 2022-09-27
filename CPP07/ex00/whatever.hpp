/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:07:37 by asimon            #+#    #+#             */
/*   Updated: 2022/09/04 12:16:25 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP 
# include <iostream>
# include <string>
# include <sstream>

template < typename T >
void		swap(T& x, T& y)
{
	T	buff;

	buff = x;
	x = y;
	y = buff;
}

template < typename T >
T			min(T first, T second)
{
	return (first < second ? first : second);
}

template < typename T >
T			max(T first, T second)
{
	return (first > second ? first : second);
}

#endif