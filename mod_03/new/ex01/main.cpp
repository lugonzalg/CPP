#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main()
{
	ClapTrap	hh1("Cairo");
	ScavTrap	h1("Jimmy");
	ScavTrap	h2("Tommy");
	ScavTrap	h3(h1);
	ScavTrap	h4;

	std::cout << "HERO: \n" << hh1;
	std::cout << "HERO: \n" << h1;
	std::cout << "HERO: \n" << h2;
	std::cout << "HERO: \n" << h3;
	std::cout << "HERO: \n" << h4;
	std::cout << "NAME " << h2.getName() << " - HP: " << h2.getHitPoints() << std::endl;
	h1.attack(h2.getName());
	h2.takeDamage(h1.getDamage());
	std::cout << "NAME " << h2.getName() << " - HP: " << h2.getHitPoints() << std::endl;
	h2.beRepaired(h1.getEnergy());
	std::cout << "NAME " << h2.getName() << " - HP: " << h2.getHitPoints() << std::endl;

	h4 = h2;
	h4.guardGate();
    return 0;
}
