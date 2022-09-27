/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:34:07 by asimon            #+#    #+#             */
/*   Updated: 2022/07/07 19:34:49 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int		main(void)
{
	PhoneBook		phonebook;
	int				i = 0;
	std::string		prompt_return;

	phonebook.menu();
	std::getline(std::cin, prompt_return);
	while ((prompt_return.compare("EXIT") != 0) && std::cin)
	{
		if (prompt_return.compare("ADD") == 0)
		{
			if (i == 8)
				i = phonebook.delete_old();
			phonebook.setcontact(i);
			i++;
		}
		else if (prompt_return.compare("SEARCH") == 0)
			phonebook.search();
		else
			std::cout << std::endl << "=> Uncorrect command please try again" << std::endl;
		phonebook.menu();
		std::getline(std::cin, prompt_return);
	}
	std::cout << std::endl << "=> Exit phonebook" << std::endl;
	return (0);
}