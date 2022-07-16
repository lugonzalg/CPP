#include "Animal.hpp"
#include <iostream>

/**************/
/*CONSTRUCTOR*/
/**************/

Animal::Animal() {
    std::cout << "Animal Default constructor" << std::endl;
    this->_type = "Eucariot";
}

Animal::Animal(Animal const& src) {
    std::cout << "Animal Copy constructor" << std::endl;
    *this = src;
}

Animal::Animal(std::string const& type) : _type(type) {
    std::cout << "Animal String constructor" << std::endl;
}

/************/
/*DESTRUCTOR*/
/************/

Animal::~Animal() {
    std::cout << "Animal Default destructor" << std::endl;
}

/**********/
/*OVERLAOD*/
/**********/

Animal&   Animal::operator= (Animal const& src) {
    this->_type = src._type;
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
