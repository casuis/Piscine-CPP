/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 04:53:23 by asimon            #+#    #+#             */
/*   Updated: 2022/09/13 19:25:11 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <stdlib.h>
# include <algorithm>

typedef		std::vector<int>::iterator	vector_it;
typedef		std::vector<int>			t_vect;

class Span
{
	private:
		unsigned int			_N;
		std::vector<int>		_tab;
	public:
		Span(unsigned int N);
		Span(void);
		Span(Span &old);
		~Span();


	////////////////////////////////////////////////////////////////////////////////
	/* Members' Functions   */

		void		addNumber(int nb);
		void		addNumbers(vector_it start, vector_it end);
		int			shortestSpan();
		int			longestSpan();
		void		print(std::ostream &os);

	////////////////////////////////////////////////////////////////////////////////
	/* Operators' overloads  */

			Span & 		operator=(Span &rght);

	////////////////////////////////////////////////////////////////////////////////
	/*  Errors' Class */

	class ErrorOutOfRange: public std::exception
	{
		public:
			virtual const char *		what() const throw();
	};
	
	class ErrorSizeVector: public std::exception
	{
		public:
			virtual const char *		what() const throw();
	};
};

std::ostream&		operator<<(std::ostream &os, Span &rgth);
#endif