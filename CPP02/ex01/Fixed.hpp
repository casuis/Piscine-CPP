/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:42:11 by asimon            #+#    #+#             */
/*   Updated: 2022/07/19 19:43:55 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iomanip>
# include <iostream>
# include <string>

class Fixed
{
private:
	int						_integer;
	static const int		_fract;
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float fvalue);
	Fixed(Fixed const & cpy);
	~Fixed(void);

	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	float		toFloat(void) const;
	int			toInt(void) const;

	Fixed&		operator=(Fixed const &old);
};

std::ostream&		operator<<(std::ostream &stream, Fixed const &used);
#endif