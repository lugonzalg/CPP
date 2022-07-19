#include "Cat.hpp"
#include <iostream>

/**************/
/*CONSTRUCTOR*/
/**************/

Cat::Cat() {
    std::cout << "Cat Default constructor" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(Cat const& src) {
    std::cout << "Cat Copy constructor" << std::endl;
    *this = src;
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << "Cat String constructor" << std::endl;
}

/************/
/*DESTRUCTOR*/
/************/

Cat::~Cat() {
    std::cout << "Cat Default destructor" << std::endl;
}

/**********/
/*OVERLAOD*/
/**********/

Cat&   Cat::operator= (Cat const& src) {
    this->_type = src._type;
    return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

void    Cat::makeSound() const { std::cout << "Miau!" << std::endl; }
