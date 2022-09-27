/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimon <asimon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:56:22 by asimon            #+#    #+#             */
/*   Updated: 2022/08/19 10:14:26 by asimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Floor.hpp"

int		main()
{
	// Creation des materias 
	std::cout << "----CREATION OF MATERIAS----" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->showAll();
	std::cout << std::endl;
	
	///////////////////////////////////////////

	// Creation des personnages
	std::cout << "----CREATION OF CHARACTERS----" << std::endl << std::endl;
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	me->showInv();
	std::cout << std::endl;
	bob->showInv();
	std::cout << std::endl;
	
	///////////////////////////////////////////

	// Creation de materiaux
	AMateria* tmp[2];

	tmp[0] = src->createMateria("ice");
	tmp[1] = src->createMateria("cure");
	
	///////////////////////////////////////////

	// Assigniations

	std::cout << "----ASSIGNIATION----" << std::endl << std::endl << "before:" << std::endl;
	me->showInv();
	me->equip(tmp[0]);
	me->equip(tmp[1]);
	std::cout << std::endl;
	std::cout << "=> Test of multiple assigniation" << std::endl;
	std::cout << std::endl;
	me->equip(tmp[0]);
	me->equip(tmp[1]);
	std::cout << std::endl <<  "after:" << std::endl;
	std::cout << std::endl;
	me->showInv();
	std::cout << std::endl;
	
	///////////////////////////////////////////

	// Creation d'un character test
	std::cout << "----CHAR TEST----" << std::endl << std::endl;
	Character test("moi 2");
	tmp[0] = src->createMateria("ice");
	tmp[1] = src->createMateria("cure");
	test.equip(tmp[0]);
	test.equip(tmp[1]);
	test.showInv();
	std::cout << std::endl;

	///////////////////////////////////////////

	// Utilisation du constructeur de copy
	std::cout << "----COPY CREATION----" << std::endl << std::endl;
	std::cout << "before:" << std::endl;
	std::cout << "\t=>test:" << std::endl;
	test.showInv();
	std::cout << std::endl;

	Character	other(test);
	
	std::cout << "after:" << std::endl;
	std::cout << "\t=>test:" << std::endl;
	test.showInv();
	std::cout << std::endl;
	std::cout << "\t=>other:" << std::endl;
	other.showInv();
	std::cout << std::endl;
	
	///////////////////////////////////////////

	//Utilisation de l'opperateur = 
	std::cout << "----USE OF = OPERATOR----" << std::endl << std::endl;
	test = other;
	std::cout << "\t=>test:" << std::endl;
	test.showInv();
	std::cout << std::endl;
	std::cout << "\t=>other:" << std::endl;
	other.showInv();
	std::cout << std::endl;
	
	///////////////////////////////////////////

	// Utilisation des materiaux
	std::cout << "----USE OF MATERIA----" << std::endl << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	///////////////////////////////////////////

	std::cout << "----TEST OPERATOR =----" << std::endl;
	Ice			mati1;
	Ice			mati2;
	Cure		matc1;
	Cure		matc2;


	mati1 = mati2;
	matc1 = matc2;

	delete bob;
	delete me;
	delete src;

	return (0);
}