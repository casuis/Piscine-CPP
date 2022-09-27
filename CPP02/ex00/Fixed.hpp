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
	Fixed(Fixed const & cpy);
	Fixed&		operator=(Fixed const &old);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	~Fixed();
};
#endif