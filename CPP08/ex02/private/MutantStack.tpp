/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:24:39 by asimon            #+#    #+#             */
/*   Updated: 2022/09/16 15:26:33 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

#ifndef MUTANTSTACK_HPP
#error __FILE__ should only be included form MutantStack.hpp
#endif

# include "./MutantStack.hpp"

////////////////////////////////////////////////////////////////////////////////
/*						MUTANTSTACK's SECTION 								  */
////////////////////////////////////////////////////////////////////////////////

/* Constructors | Destructor  */
template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	return;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> &old): std::stack<T>()
{
	MutantStack<T>::iterator		it = old.begin();
	MutantStack<T>::iterator		ite = old.end();

	for (; it != ite; it++)
	{
		this->push(*it);
	}
	return ;
}

////////////////////////////////////////////////////////////////////////////////
/*                              OPERATOR's                                    */
////////////////////////////////////////////////////////////////////////////////

template <typename T>
MutantStack<T>		MutantStack<T>::operator=(MutantStack<T> &rght)
{
	MutantStack<T>::iterator		it = rght.begin();
	MutantStack<T>::iterator			ite = rght.end();

	if (this == &rght)
		return (rght);
	for (int i = 0; this->size() != 0; i++)
	{
		this->pop();
	}
	for (; it != ite; it++)
	{
		this->push(*it);
	}
	return (this);
}

template <typename T>
bool		MutantStack<T>::operator!=(MutantStack<T> &rght)
{
	MutantStack<T>::iterator		it = rght.begin();
	MutantStack<T>::iterator		ite = rght.end();
	MutantStack<T>::iterator		it_2 = this->begin();

	if (this->size() != rght.size())
		return (true);
	for (; it != ite; it++)
	{
		if (*it_2 != *it)
			return (true);
		it_2++;
	}
	return (false);
}

template <typename T>
bool		MutantStack<T>::operator>=(MutantStack<T> &rght)
{
	MutantStack<T>::iterator		it = rght.begin();
	MutantStack<T>::iterator		ite = rght.end();
	MutantStack<T>::iterator		it_2 = this->begin();

	if (this->size() != rght.size())
		return (false);
	for (; it != ite; it++)
	{
		if (*it_2 < *it)
			return (false);
		it_2++;
	}
	return (true);

}

template <typename T>
bool		MutantStack<T>::operator>(MutantStack<T> &rght)
{
	MutantStack<T>::iterator		it = rght.begin();
	MutantStack<T>::iterator		ite = rght.end();
	MutantStack<T>::iterator		it_2 = this->begin();

	if (this->size() != rght.size())
		return (false);
	for (; it != ite; it++)
	{
		if (*it_2 <= *it)
			return (false);
		it_2++;
	}
	return (true);
}

template <typename T>
bool		MutantStack<T>::operator<=(MutantStack<T> &rght)
{
	MutantStack<T>::iterator		it = rght.begin();
	MutantStack<T>::iterator		ite = rght.end();
	MutantStack<T>::iterator		it_2 = this->begin();

	if (this->size() != rght.size())
		return (false);
	for (; it != ite; it++)
	{
		if (*it_2 > *it)
			return (false);
		it_2++;
	}
	return (true);
}

template <typename T>
bool		MutantStack<T>::operator<(MutantStack<T> &rght)
{
	MutantStack<T>::iterator		it = rght.begin();
	MutantStack<T>::iterator		ite = rght.end();
	MutantStack<T>::iterator		it_2 = this->begin();

	if (this->size() != rght.size())
		return (false);
	for (; it != ite; it++)
	{
		if (*it_2 >= *it)
			return (false);
		it_2++;
	}
	return (true);
}

template <typename T>
bool		MutantStack<T>::operator==(MutantStack<T> &rght)
{
	MutantStack<T>::iterator		it = rght.begin();
	MutantStack<T>::iterator		ite = rght.end();
	MutantStack<T>::iterator		it_2 = this->begin();

	if (this->size() != rght.size())
		return (false);
	for (; it != ite; it++)
	{
		if (*it_2 != *it)
			return (false);
		it_2++;
	}
	return (true);
}

#endif