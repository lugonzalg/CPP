#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria *tmp, *srcTmp;

	for (int i = 0; i < 2; i++)
	{
		std::cout << "ICE " << i << std::endl;
		tmp = src->createMateria("ice");
		me->equip(tmp);
	}
	for (int i = 2; i < 4; i++) {
		std::cout << "CURE " << i << std::endl;
		tmp = src->createMateria("cure");
		me->equip(tmp);
	}
	srcTmp = src->createMateria("ice");
	if (srcTmp) {
		std::cout << "Succesfully created materia" << std::endl;
		std::cout << srcTmp->getType() << std::endl;
	}
	else
		std::cout << "Error: Wrong materia type" << std::endl;
	srcTmp = src->createMateria("cure");
	if (srcTmp) {
		std::cout << "Succesfully created materia" << std::endl;
		std::cout << srcTmp->getType() << std::endl;
	}
	else
		std::cout << "Error: Wrong materia type" << std::endl;
	srcTmp = src->createMateria("cureice");
	if (srcTmp) {
		std::cout << "Succesfully created materia" << std::endl;
		std::cout << srcTmp->getType() << std::endl;
	}
	else
		std::cout << "Error: Wrong materia type" << std::endl;
	for (int i = 0; i < 10; i++) {
		src->learnMateria(new Ice);
	}
	ICharacter* notMe = new Character(*(Character *)me);
	ICharacter* bob = new Character("bob");
	me->use(0, *me);
	me->use(1, *bob);
	notMe->use(3, *me);
	for (int i = 8; i > -10; i--) {
		me->unequip(i);
	}

	delete bob;
	delete me;
	delete src;
	return 0;
}
