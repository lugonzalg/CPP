#include "Animal.hpp"
#include <iostream>

/*************/
/*CONSTRUCTOR*/
/*************/

Animal::Animal() {
    std::cout << "Default constructor" << std::endl;
    this->_type     = "Eucariot";
    this->_brain    = NULL;
}

Animal::Animal(Animal const& src) {
    std::cout << "Copy constructor" << std::endl;
    *this = src;
}

Animal::Animal(std::string const& type) : _type(type) {
    std::cout << "String constructor" << std::endl;
    this->_brain = NULL;
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
    this->_brain = new Brain();
    //this->_brain = this->_brain; //PELIGRO
    return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

void    Animal::makeSound() const { std::cout << "qiwemfwefqd" << std::endl;}

/*********/
/*GETTERS*/
/*********/

std::string const&	Animal::getType() const { return (this->_type); }
