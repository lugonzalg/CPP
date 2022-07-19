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
    this->_brain = new Brain();
    *this = src;
}

Dog::Dog(std::string const& type) {
    std::cout << "String Dog constructor" << std::endl;
    this->_brain = new Brain();
    this->_type = type;
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
    this->_type = src.getType();
    *this->_brain = *src._brain;
    return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

void    Dog::makeSound() const { std::cout << "Guau!" << std::endl; }
void    Dog::brainAddr() const { std::cout << this->_brain << std::endl; }
