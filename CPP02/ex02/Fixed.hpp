/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:42:11 by asimon            #+#    #+#             */
/*   Updated: 2022/07/28 19:46:17 by asimon           ###   ########.fr       */
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

	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
	static Fixed	min(Fixed &i1, Fixed &i2);
	static Fixed	min(Fixed const &i1, Fixed const &i2);
	static Fixed	max(Fixed &i1, Fixed &i2);
	static Fixed	max(Fixed const &i1, Fixed const &i2);

	Fixed&			operator=(Fixed const &old);
	bool			operator<(Fixed const &old) const;
	bool			operator<=(Fixed const &old)const;
	bool			operator>(Fixed const &old) const;
	bool			operator>=(Fixed const &old)const;
	bool			operator!=(Fixed const &old)const;
	bool			operator==(Fixed const &old)const;
	Fixed			operator++(int);
	Fixed&			operator++();
	Fixed&			operator--();
	Fixed			operator--(int);
	Fixed			operator*(Fixed const &old) const;
	Fixed			operator+(Fixed const &old)const;
	Fixed			operator/(Fixed const &old)const;
	Fixed			operator-(Fixed const &old)const;

};

std::ostream&		operator<<(std::ostream &stream, Fixed const &used);
#endif