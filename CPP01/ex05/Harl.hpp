#ifndef HARL_HPP_
# define HARL_HPP_
# include <string>
# include <iomanip>
# include <sstream>
# include <iostream>

class Harl
{
private:
	std::string			_tab[4];
	void			(Harl::*_ptr[4]) (void) const;

	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;
public:
	std::string		prompt;
	Harl(/* args */);
	~Harl();
	void	complain(std::string level);
};

#endif