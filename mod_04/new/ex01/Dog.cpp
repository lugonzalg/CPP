#include "Dog.hpp"
#include <iostream>

/*************/
/*CONSTRUCTOR*/
/*************/

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

/*************/
/*DESTRUCTOR*/
/*************/

Dog::~Dog() {
    std::cout << "Default Dog destructor" << std::endl;
    delete this->_brain;
}

/**********/
/*OVERLOAD*/
/**********/

Dog&   Dog::operator= (Dog const& src) {
    std::cout << "Dog Deep Copy" << std::endl;
    std::cout << "OLD BRAIN: " << this->_brain << std::endl;
    this->_type = src.getType();
    delete this->_brain;
    this->_brain = new Brain("deep");
    std::cout << "NEW BRAIN: " << this->_brain << std::endl;
    return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

void    Dog::makeSound() const { std::cout << "Guau!" << std::endl; }
