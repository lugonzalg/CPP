#include "Weapon.hpp"
#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA(void) { std::cout << "HumanA destructor" << std::endl;}

void    HumanA::attack() {std::cout << this->_name << " attacks with his " << this->_weapon.get_type() << std::endl;}

void    HumanA::setWeapon(Weapon& weapon) {this->_weapon = weapon;}
