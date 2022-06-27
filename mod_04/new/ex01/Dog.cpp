#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Default Dog constructor" << std::endl;
}

Dog::Dog(Dog const& src) {
    std::cout << "Copy Dog constructor" << std::endl;
    *this = src;
}

Dog::Dog(std::string const& type) {
    this->_type = type;
    std::cout << "String Dog constructor" << std::endl;
}

Dog::~Dog() {
    std::cout << "Default Dog destructor" << std::endl;
    delete this->_brain;
}

Dog&   Dog::operator= (Dog const& src) {
    (void)src;
    this->_type = "deep";
    delete this->_brain;
    this->_brain = new Brain("deep");
    //this->_brain = src._brain;
    return (*this);
}

void    Dog::makeSound() const { std::cout << "Guau!" << std::endl; }
