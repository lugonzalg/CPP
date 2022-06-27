/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:38:43 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 19:46:28 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>
#include <Ice.hpp>
#include <Cure.hpp>

int main()
{
	//IMateriaSource* src = new MateriaSource();
	//src->learnMateria(new Ice());
	//src->learnMateria(new Cure());
	//ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* tmp2 = new Ice;
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//tmp = src->createMateria("cure");
	//me->equip(tmp);
	//ICharacter* bob = new Character("bob");
	//me->use(0, *bob);
	//me->use(1, *bob);
	//delete bob;
	//delete me;
	//delete src;
	(void)tmp;
	(void)tmp2;
	return 0;
}
