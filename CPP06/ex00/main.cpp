/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:59:38 by asimon            #+#    #+#             */
/*   Updated: 2022/09/02 11:05:06 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Convertion en double avec atof()
// Pb lorsque chaine de char (ne doit pas etre gere)
// lorsque juste un char retour de 0 atof 
// Verif en premier du type de char dans chaque objet
#include "Tab.hpp"
#include "Int.hpp"
#include "Float.hpp"
#include "Double.hpp"
#include "Char.hpp"

int		main(int argc, char **argv)
{
	if (argc == 2)
		Tab		e(argv[1]);
	else
	{
		std::cerr << "Error" << std::endl << "Programme need one argument" << std::endl;
		return (1);
	}
	return (0);
}