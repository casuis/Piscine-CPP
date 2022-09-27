#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>

class Contact
{
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone;
		std::string		_darkest_secret;

		void				set_first_name();
		void				set_last_name();
		void				set_nickname();
		void				set_phone();
		void				set_darkest_secret();
	
	public:
		Contact();
		~Contact();
		std::string			get_trunc_firstname();
		std::string			get_trunc_lastname();
		std::string			get_trunc_nickname();
		std::string			get_trunc_phone();
		std::string			get_trunc_darkestsecret();
		std::string			get_firstname();
		std::string			get_lastname();
		std::string			get_nickname();
		std::string			get_phone();
		std::string			get_darkestsecret();
		void				set();
};

#endif