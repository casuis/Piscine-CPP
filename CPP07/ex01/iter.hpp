/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:19:58 by asimon            #+#    #+#             */
/*   Updated: 2022/09/05 19:44:24 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <stdio.h>
# include <iostream>
# include <string>
# include <iomanip>

template < typename T, typename F>
void		iter(T tab[], size_t size, F (*f)(T))
{
	for (size_t i = 0; i < size; i++)
	{
		f(tab[i]);
	}
	return ;
}
#endif