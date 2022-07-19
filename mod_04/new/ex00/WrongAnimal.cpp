#include "WrongAnimal.hpp"
#include <iostream>

/**************/
/*CONSTRUCTOR*/
/**************/

WrongAnimal::WrongAnimal() {
    std::cout << "Default WrongAnimal constructor" << std::endl;
    this->_type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {
    std::cout << "Copy WrongAnimal constructor" << std::endl;
    *this = src;
}

WrongAnimal::WrongAnimal(std::string const& type) : _type(type) {
    std::cout << "String WrongAnimal constructor" << std::endl;
}

/************/
/*DESTRUCTOR*/
/************/

WrongAnimal::~WrongAnimal() {
    std::cout << "Default WrongAnimal destructor" << std::endl;
}

/**********/
/*OVERLAOD*/
/**********/

WrongAnimal&   WrongAnimal::operator= (WrongAnimal const& src) {
    this->_type = src._type;
    return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

void    WrongAnimal::makeSound() const { std::cout << "qiwemfwefqd" << std::endl;}

/*********/
/*GETTERS*/
/*********/

std::string const&	WrongAnimal::getType() const { return (this->_type); }
