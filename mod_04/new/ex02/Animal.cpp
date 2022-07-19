#include "Animal.hpp"
#include <iostream>

/*************/
/*CONSTRUCTOR*/
/*************/

Animal::Animal() {
    std::cout << "Default constructor" << std::endl;
    this->_type     = "Eucariot";
}

Animal::Animal(Animal const& src) {
    std::cout << "Copy constructor" << std::endl;
    *this = src;
}

Animal::Animal(std::string const& type) : _type(type) {
    std::cout << "String constructor" << std::endl;
}

/*************/
/*DESTRUCTOR*/
/*************/

Animal::~Animal() {
    std::cout << "Default destructor" << std::endl;
}

/**********/
/*OVERLOAD*/
/**********/

Animal&   Animal::operator= (Animal const& src) {
    this->_type = src._type;
    return (*this);
}

/*********/
/*GETTERS*/
/*********/

std::string const&	Animal::getType() const { return (this->_type); }
