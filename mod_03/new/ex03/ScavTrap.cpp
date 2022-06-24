#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor" << std::endl;
	this->setHP_ST();
	this->setEN_ST();
	this->setDM_ST();
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name) {
	std::cout << "ScavTrap string constructor" << std::endl;
	this->setHitPoints(100);
	this->setEnergy(50);
	this->setDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const& src) {
	*this = src;
	std::cout << "ScavTrap copy contructor" << std::endl;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap default destructor" << std::endl;}

ScavTrap&	ScavTrap::operator= (ScavTrap const& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergy(src.getEnergy());
	this->setDamage(src.getDamage());
	return (*this);
}

void	ScavTrap::guardGate() { std::cout << "ScavTrap Guard gate" << std::endl; }

void	ScavTrap::setHP_ST() { this->setHitPoints(100); }
void	ScavTrap::setEN_ST() { this->setEnergy(50); }
void	ScavTrap::setDM_ST() { this->setDamage(20); }
