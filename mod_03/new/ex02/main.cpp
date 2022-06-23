#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main()
{
	ScavTrap	h1("Jimmy");
	ScavTrap	h2("Tommy");
	ScavTrap	h3(h1);
	ScavTrap	h4;

	h4 = h2;
	h4.guardGate();
    return 0;
}
