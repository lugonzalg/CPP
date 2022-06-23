#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() { std::cout << "Inheretence default constructor" << std::endl;}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name) {
	std::cout << "Inheretence string constructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) {
	*this = src;
	std::cout << "Inheretence copy contructor" << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << "Inheretence default destructor" << std::endl;}

ScavTrap&	ScavTrap::operator= (ScavTrap const& src) {
	(void)src;
	return (*this);
}

void	ScavTrap::guardGate() { std::cout << "Inheretence Guard gate" << std::endl; }
