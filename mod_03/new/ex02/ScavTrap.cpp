#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {
	std::cout << "Inheretence default constructor" << std::endl;
	this->setHitPoints(100);
	this->setEnergy(50);
	this->setDamage(20);
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name) {
	std::cout << "Inheretence string constructor" << std::endl;
	this->setHitPoints(100);
	this->setEnergy(50);
	this->setDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const& src) {
	*this = src;
	std::cout << "Inheretence copy contructor" << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << "Inheretence default destructor" << std::endl;}

ScavTrap&	ScavTrap::operator= (ScavTrap const& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergy(src.getEnergy());
	this->setDamage(src.getDamage());
	return (*this);
}

void	ScavTrap::guardGate() { std::cout << "Inheretence Guard gate" << std::endl; }
