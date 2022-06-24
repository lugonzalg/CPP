#include "DiamondTrap.hpp"
#include <iostream>

void	DiamondTrap::_init() {
	FragTrap::setHP_FT();
	ScavTrap::setEN_ST();
	FragTrap::setDM_FT();
}

DiamondTrap::DiamondTrap() {
	std::cout << "Inheretence default constructor" << std::endl;
	this->_init();
}

DiamondTrap::DiamondTrap(std::string const& name) : ClapTrap(name + "_clap_name"), ScavTrap(), _name(name) {
	std::cout << "Inheretence string constructor" << std::endl;
	this->_init();
}

DiamondTrap::DiamondTrap(DiamondTrap const& src) {
	*this = src;
	std::cout << "Inheretence copy contructor" << std::endl;
}

DiamondTrap::~DiamondTrap() { std::cout << "Inheretence default destructor" << std::endl;}

DiamondTrap&	DiamondTrap::operator= (DiamondTrap const& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergy(src.getEnergy());
	this->setDamage(src.getDamage());
	return (*this);
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name: " << this->_name << std::endl;
	std::cout << "Clap Name: " << ClapTrap::getName() << std::endl;
}

void	DiamondTrap::stats() {
	std::cout << "////////////STATS///////////////" << std::endl;
	std::cout << "NAME: " << _name << std::endl;
	std::cout << "HITPOINTS: " << getHitPoints() << std::endl;
	std::cout << "ENERGY: " << getEnergy() << std::endl;
	std::cout << "DAMAGE: " << ScavTrap::getDamage() << std::endl;
	std::cout << std::endl;
}
