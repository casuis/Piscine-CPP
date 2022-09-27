/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 04:53:57 by asimon            #+#    #+#             */
/*   Updated: 2022/09/20 18:24:32 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../private/Span.hpp"

Span::Span(unsigned int N): _N(N)
{
	return ;
}

Span::Span(): _N(0)
{
	return ;
}

Span::Span(Span &old): _N(old._N)
{
	vector_it		start;
	vector_it		end;

	for (; start != end; start++)
	{
		this->_tab.push_back(*start);
	}
	return ;
}

Span::~Span()
{
	return ;
}

void		Span::addNumber(int nb)
{
	if (this->_tab.size() >= this->_N)
	{
		ErrorOutOfRange		e;
		throw (e);
	}
	else
		this->_tab.push_back(nb);
	return ;
}

void		Span::addNumbers(vector_it start, vector_it end)
{
	t_vect		tmp(start, end);


	if (this->_tab.size() + tmp.size() > this->_N)
	{
		ErrorOutOfRange		e;
		throw (e);
	}
	std::copy(tmp.begin(), tmp.end(), std::back_inserter(this->_tab));
	
}

static int		compare(vector_it first, vector_it second)
{
	if (*first >= *second)
		return (-(*second - *first));
	else
		return (-(*first - *second));
	return (0);
}

int			Span::shortestSpan()
{
	vector_it	it_1 = this->_tab.begin();
	vector_it	it_2 = this->_tab.begin();
	vector_it	ite = this->_tab.end();
	int			value;

	if (this->_tab.size() <= 1)
	{
		ErrorSizeVector		e;
		throw (e);
	}
	else
	{
		value = compare(it_1, it_1 + 1);
		for (; it_1 != ite; it_1++)
		{
			it_2 = it_1 + 1;
			for (; it_2 != ite; it_2++)
			{
				if (compare(it_1, it_2) <= value)
					value = compare(it_1, it_2);
			}
		}
	}
	return (value);
}

int			Span::longestSpan()
{
	vector_it		min = std::min_element(this->_tab.begin(), this->_tab.end());
	vector_it		max = std::max_element(this->_tab.begin(), this->_tab.end());

	if (this->_tab.size() <= 1)
	{
		ErrorSizeVector			e;
		throw (e);
	}
	return (*max - *min);
}

Span	&	Span::operator=(Span &rght)
{
	vector_it		start = rght._tab.begin();
	vector_it		end = rght._tab.end();

	this->_tab.clear();
	this->_N = rght._N;
	for (; start != end; start++)
	{
		this->_tab.push_back(*start);
	}
	return (*this);
}

void		Span::print(std::ostream &os)
{
	vector_it		start = this->_tab.begin();
	vector_it		end = this->_tab.end();

	for (; start != end; start++)
	{
		os << *start << std::endl;
	}
	return ;
}

const char *		Span::ErrorSizeVector::what() const throw()
{
	return ("Error\nNot enough elem to compare\n");
}

const char *		Span::ErrorOutOfRange::what() const throw()
{
	return ("Error\nIndex out of range\n");
}

std::ostream&		operator<<(std::ostream &os, Span &rgth)
{
	rgth.print(os);
	return (os);
}