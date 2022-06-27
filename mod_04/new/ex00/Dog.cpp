#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    this->_type = "Dog";
    std::cout << "Default constructor" << std::endl;
}

Dog::Dog(Dog const& src) {
    std::cout << "Copy constructor" << std::endl;
    *this = src;
}

Dog::Dog(std::string type) {
    this->_type = type;
    std::cout << "String constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << "Default destructor" << std::endl;
}

Dog&   Dog::operator= (Dog const& src) {
    this->_type = src._type;
    return (*this);
}

void    Dog::makeSound() const { std::cout << "Guau!" << std::endl; }
