/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:02:13 by asimon            #+#    #+#             */
/*   Updated: 2022/09/06 22:27:05 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>
# include <stdio.h>

template <typename T>
class Array
{
	private:
		T		*_elem;
		size_t	_size;
		
	public:
		Array(void)
		{
			this->_elem = 0x0;
			this->_size = 0;
			return ;
		}
		Array(unsigned int n)
		{
			this->_elem = new  T [n];
			for (unsigned int i = 0; i < n; i++)
			{
				this->_elem[i] = 0;
			}
			this->_size = n;
			return ;
		}
		Array(Array const &old)
		{
			this->_elem = new T [old._size];
			for (unsigned int i = 0; i < old._size; i++)
			{
				this->_elem[i] = old._elem[i];
			}
			this->_size = old._size;
			return ;
		}
		~Array(){delete [] this->_elem;}

		Array&	operator=(Array const &rght)
		{
			if (this->_elem != 0x0)
				delete [] this->_elem;
			this->_elem = new T [rght._size];
			for (unsigned int i = 0; i < rght._size; i++)
			{
				this->_elem[i] = rght._elem[i];
			}
			this->_size = rght._size;
			return (*this) ;
		}

		T&		operator[](int nb) const
		{
			if (nb < 0 || static_cast<unsigned int>(nb) >= this->_size)
			{
				ErrorIteration		e;
				throw (e);
			}
			else
				return (this->_elem[nb]);
		}

		class ErrorIteration: public std::exception
		{
			public:
				virtual const char *	what() const throw()
				{
					return ("Error iteration\n");
				}
		};

		size_t		size() const
		{
			return (this->_size);
		}
};
#endif