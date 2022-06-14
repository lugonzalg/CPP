#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << name << " braaaaainz" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " ouch i'm diying, again¿" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "Hey :D" << std::endl;
}

void    Zombie::set_name(std::string name) {this->_name = name;}
