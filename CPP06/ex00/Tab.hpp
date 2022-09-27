/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tab.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:34:48 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 15:13:57 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAB_HPP
# define TAB_HPP
# include "header.hpp"
# include "ABase.hpp"
# include "Int.hpp"
# include "Char.hpp"
# include "Double.hpp"
# include "Float.hpp"

class ABase;

class Tab
{
	private:
		ABase			*_tab[4];
		static int		_tabSize;
	public:
		Tab(char *str);
		Tab(Tab &old);
		Tab(void);
		~Tab();
};

#endif