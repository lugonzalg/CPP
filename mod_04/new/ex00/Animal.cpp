#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
    std::cout << "Default constructor" << std::endl;
    this->_type = "";
}

Animal::Animal(Animal const& src) {
    std::cout << "Copy constructor" << std::endl;
    *this = src;
}

Animal::Animal(std::string const& type) : _type(type) {
    std::cout << "String constructor" << std::endl;
}

Animal::~Animal() {
    std::cout << "Default destructor" << std::endl;
}

Animal&   Animal::operator= (Animal const& src) {
    this->_type = src._type;
    return (*this);
}

void    Animal::makeSound() const { std::cout << "qiwemfwefqd" << std::endl;}

std::string const&	Animal::getType() const { return (this->_type); }
