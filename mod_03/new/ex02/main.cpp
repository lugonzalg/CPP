#include "FragTrap.hpp"

#include <iostream>

int main()
{
    FragTrap    h1("Jimmy");
    FragTrap    h2("Tommy");
	FragTrap	h3(h1);
	FragTrap	h4;

	h4 = h2;
	//NORMAL CASE
	h1.attack(h2.getName());
	h2.takeDamage(h1.getDamage());

	//COPY CASE
	h4.attack(h3.getName());
	h3.takeDamage(h4.getDamage());

	h2.beRepaired(h1.getEnergy());
	std::cout << "ENERGY: " << h2.getEnergy() << std::endl;
    return 0;
}
