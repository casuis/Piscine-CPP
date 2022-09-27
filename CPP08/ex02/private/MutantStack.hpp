/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:51:35 by asimon            #+#    #+#             */
/*   Updated: 2022/09/16 15:26:19 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include "header.hpp"

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;

	////////////////////////////////////////////////////////////////////////////////
	/* Members' Functions  */

		MutantStack();
		MutantStack(MutantStack<T> &old);
		~MutantStack();
		iterator			begin(){return this->c.begin();};
		iterator			end(){return this->c.end();};

	////////////////////////////////////////////////////////////////////////////////
	/* Operator's overload  */
		
		MutantStack<T>		operator=(MutantStack<T> &rght);
		bool		operator<=(MutantStack<T> &rght);
		bool		operator<(MutantStack<T> &rght);
		bool		operator>=(MutantStack<T> &rght);
		bool		operator>(MutantStack<T> &rght);
		bool		operator!=(MutantStack<T> &rght);
		bool		operator==(MutantStack<T> &rght);

	private:

};

# include "MutantStack.tpp"
#endif