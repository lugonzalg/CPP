#include "Dog.hpp"
#include <iostream>

/**************/
/*CONSTRUCTOR*/
/**************/

Dog::Dog() {
    std::cout << "Dog Default constructor" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const& src) {
    std::cout << "Dog Copy constructor" << std::endl;
    *this = src;
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << "Dog String constructor" << std::endl;
}

/************/
/*DESTRUCTOR*/
/************/

Dog::~Dog() {
    std::cout << "Dog Default destructor" << std::endl;
}

/**********/
/*OVERLAOD*/
/**********/

Dog&   Dog::operator= (Dog const& src) {
    this->_type = src._type;
    return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

void    Dog::makeSound() const { std::cout << "Guau!" << std::endl; }
