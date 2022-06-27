#include "FragTrap.hpp"
#include <iostream>

void	FragTrap::_init() {
	this->setHitPoints(100);
	setEnergy(100);
	setDamage(30);
}

FragTrap::FragTrap() {
	std::cout << "Inheretence default constructor" << std::endl;
	this->_init();
}

FragTrap::FragTrap(std::string const& name) : ClapTrap(name) {
	std::cout << "Inheretence string constructor" << std::endl;
	this->_init();
}

FragTrap::FragTrap(FragTrap const& src) {
	*this = src;
	std::cout << "Inheretence copy contructor" << std::endl;
}

FragTrap::~FragTrap() { std::cout << "Inheretence default destructor" << std::endl;}

FragTrap&	FragTrap::operator= (FragTrap const& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergy(src.getEnergy());
	this->setDamage(src.getDamage());
	return (*this);
}

void	FragTrap::highFiveGuys() { std::cout << "Inheretence High Five Guys" << std::endl; }
