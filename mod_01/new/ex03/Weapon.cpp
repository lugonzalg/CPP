#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void) {}

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(void) {std::cout << "Weapon destructor" << std::endl;}

void    Weapon::setType(std::string type) {this->_type = type;}

std::string const&  Weapon::get_type(void) const {return this->_type;}
