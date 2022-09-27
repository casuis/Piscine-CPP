/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:34:28 by asimon            #+#    #+#             */
/*   Updated: 2022/07/07 19:40:02 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "./Contact.class.hpp"


class PhoneBook
{
	private:
		Contact		_repo[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	setcontact(int pos);
		void	print_tab();
		int		delete_old();
		void	search();
		int		get_index();
		void	menu();
};

#endif