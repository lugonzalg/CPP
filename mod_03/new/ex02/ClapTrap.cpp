#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _hitPoints(10), _energy(10), _damage(0){
    std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
    std::cout << "Copy constructor" << std::endl;
    *this = src;
}

ClapTrap::ClapTrap(std::string const& name) : _name(name), _hitPoints(100), _energy(50), _damage(20) {
    std::cout << "String constructor" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default destructor" << std::endl;
}

ClapTrap&   ClapTrap::operator= (ClapTrap const& src) {
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energy = src._energy;
    this->_damage = src._damage;
    return (*this);
}

void    ClapTrap::attack(std::string const& target) {
    std::cout << _name << " attacks " << target << " with " << this->_damage << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "BEFORE ATTACK: " << this->_hitPoints << std::endl;
    this->_energy -= amount;
    std::cout << "ATTACK! " << std::endl;
	std::cout << "AFTER ATTACK: " << this->_hitPoints << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "BEFORE HEAL: " << this->_hitPoints << std::endl;
    this->_hitPoints += amount;
    std::cout << _name << " is healed for " << amount << std::endl;
	std::cout << "AFTER HEAL: " << this->_hitPoints << std::endl;
}

std::string&	ClapTrap::getName() { return (this->_name); }
unsigned int	ClapTrap::getDamage() { return (this->_damage); }
unsigned int	ClapTrap::getEnergy() { return (this->_energy); }
unsigned int	ClapTrap::getHitPoints() { return (this->_hitPoints); }
