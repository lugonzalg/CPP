#include "Weapon.hpp"
#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(void) {}

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB(void) { std::cout << "HumanB destructor" << std::endl;}

void    HumanB::attack() {std::cout << this->_name << " attacks with his " << this->_weapon->get_type() << std::endl;}

void    HumanB::setWeapon(Weapon& weapon) {this->_weapon = &weapon;}
