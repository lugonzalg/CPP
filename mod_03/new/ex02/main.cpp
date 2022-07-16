#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main()
{
	ClapTrap	clap1("Cairo");
	ScavTrap	scav1("Jimmy");
	ScavTrap	scav2("Tommy");
	ScavTrap	scav3(scav1);
	ScavTrap	scav4;

	std::cout << "HERO: \n" << clap1;
	std::cout << "HERO: \n" << scav1;
	std::cout << "HERO: \n" << scav2;
	std::cout << "HERO: \n" << scav3;
	std::cout << "HERO: \n" << scav4;

	std::cout << "NAME " << scav2.getName() << " - HP: " << scav2.getHitPoints() << std::endl;
	scav1.attack(scav2.getName());
	scav2.takeDamage(scav1.getDamage());
	std::cout << "NAME " << scav2.getName() << " - HP: " << scav2.getHitPoints() << std::endl;
	scav2.beRepaired(scav1.getEnergy());
	std::cout << "NAME " << scav2.getName() << " - HP: " << scav2.getHitPoints() << std::endl;

	scav4 = scav2;
	scav4.guardGate();

    FragTrap    frag1("Jimmy");
    FragTrap    frag2("Tommy");
	FragTrap	frag3(frag1);
	FragTrap	frag4;

	frag4 = frag2;
	//NORMAL CASE
	std::cout << "HERO: \n" << frag1;
	std::cout << "HERO: \n" << frag2;
	std::cout << "HERO: \n" << frag3;
	std::cout << "HERO: \n" << frag4;

	std::cout << "NAME " << frag2.getName() << " - HP: " << frag2.getHitPoints() << std::endl;
	frag1.attack(frag2.getName());
	frag2.takeDamage(frag1.getDamage());
	std::cout << "NAME " << frag2.getName() << " - HP: " << frag2.getHitPoints() << std::endl;

	//COPY CASE
	frag4.attack(frag3.getName());
	frag3.takeDamage(frag4.getDamage());

	frag2.beRepaired(frag1.getEnergy());
	std::cout << "NAME " << frag2.getName() << " - HP: " << frag2.getHitPoints() << std::endl;
    return 0;
}
