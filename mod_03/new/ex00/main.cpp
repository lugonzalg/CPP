#include "ClapTrap.hpp"

#include <iostream>

int main()
{
    ClapTrap    h1("Jimmy");
    ClapTrap    h2("Tommy");
	ClapTrap	h3(h1);
	ClapTrap	h4;

	h4 = h2;
	//NORMAL CASE
	h1.attack(h2.getName());
	h2.takeDamage(h1.getDamage());

	//COPY CASE
	h4.attack(h3.getName());
	h3.takeDamage(h4.getDamage());

	h2.beRepaired(h1.getEnergy());
	std::cout << h2.getHitPoints() << std::endl;
    return 0;
}
