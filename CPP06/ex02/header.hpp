/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:30:27 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 14:19:15 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <time.h>
# include <stdlib.h>
# include <exception>
# include <iostream>

Base*			generate(void);
void			identify(Base& p);
#endif