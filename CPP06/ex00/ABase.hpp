/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABase.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:01:15 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 14:45:58 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include "header.hpp"

class ABase
{
	protected:
		std::string		type;
	public:
		ABase(std::string type);
		virtual ~ABase();
		std::string		getType() const;
		virtual void	print(std::ostream &address) const = 0;
	class NullStr: public std::exception
	{
		public:
			virtual const char *	what() const throw();
	};

	class NonPrintable: public std::exception
	{
		public:
			virtual const char *	what() const throw();
	};

	class OutOfRangeInt: public std::exception
	{
		public:
			virtual const char *	what() const throw();
	};

	class ErrorArgument: public std::exception
	{
		public:
			virtual const char *	what() const throw();
	};

	class Error: public std::exception
	{
		public:
			virtual const char *	what() const throw();
	};
};

std::ostream	&		operator<<(std::ostream &o, const ABase *obj);
#endif