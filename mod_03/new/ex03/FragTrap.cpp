#include "FragTrap.hpp"
#include <iostream>

void	FragTrap::_init() {
	this->setHP_FT();
	this->setEN_FT();
	this->setDM_FT();
}

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor" << std::endl;
	this->_init();
}

FragTrap::FragTrap(std::string const& name) : ClapTrap(name) {
	std::cout << "FragTrap string constructor" << std::endl;
	this->_init();
}

FragTrap::FragTrap(FragTrap const& src) {
	*this = src;
	std::cout << "FragTrap copy contructor" << std::endl;
}

FragTrap::~FragTrap() { std::cout << "FragTrap default destructor" << std::endl;}

FragTrap&	FragTrap::operator= (FragTrap const& src) {
	this->setName(src.getName());
	this->setHitPoints(src.getHitPoints());
	this->setEnergy(src.getEnergy());
	this->setDamage(src.getDamage());
	return (*this);
}

void	FragTrap::highFiveGuys() { std::cout << "FragTrap High Five Guys" << std::endl; }

void	FragTrap::setHP_FT() { this->setHitPoints(100); }
void	FragTrap::setEN_FT() { this->setEnergy(100); }
void	FragTrap::setDM_FT() { this->setDamage(30); }
