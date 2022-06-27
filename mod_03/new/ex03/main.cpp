#include "DiamondTrap.hpp"

#include <iostream>

int main()
{
    DiamondTrap    h1("Jimmy");
    //DiamondTrap    h2("Tommy");
	//DiamondTrap	h3(h1);
	//DiamondTrap	h4;

	h1.whoAmI();
	h1.stats();

	//h4 = h2;
	//NORMAL CASE
	//h1.attack(h2.getName());
	//h2.takeDamage(h1.getDamage());

	//COPY CASE
	//h4.attack(h3.getName());
	//h3.takeDamage(h4.getDamage());

	//h2.beRepaired(h1.getEnergy());
	//std::cout << "ENERGY: " << h2.getEnergy() << std::endl;
    return 0;
}
