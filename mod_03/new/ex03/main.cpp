#include "DiamondTrap.hpp"

#include <iostream>

int main()
{
    DiamondTrap    dia1("Jimmy");
    DiamondTrap    dia2("Tommy");
	DiamondTrap	dia3(dia1);
	DiamondTrap	dia4;


	dia4 = dia2;

	dia1.whoAmI();
	dia1.stats();
	std::cout << "HERO: \n" << dia1;
	//NORMAL CASE
	std::cout << "NAME " << dia2.getName() << " - HP: " << dia2.getHitPoints() << std::endl;
	dia1.attack(dia2.getName());
	dia2.takeDamage(dia1.getDamage());
	std::cout << "NAME " << dia2.getName() << " - HP: " << dia2.getHitPoints() << std::endl;

	//COPY CASE
	dia4.attack(dia3.getName());
	dia3.takeDamage(dia4.getDamage());

	dia2.beRepaired(dia1.getEnergy());
	std::cout << "NAME " << dia2.getName() << " - HP: " << dia2.getHitPoints() << std::endl;
	std::cout << "ENERGY: " << dia2.getEnergy() << std::endl;
    return 0;
}
