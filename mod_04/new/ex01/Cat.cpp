#include "Cat.hpp"
#include <iostream>

/*************/
/*CONSTRUCTOR*/
/*************/

Cat::Cat() {
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Default Cat constructor" << std::endl;
}

Cat::Cat(Cat const& src) {
    std::cout << "Copy Cat constructor" << std::endl;
    this->_brain = new Brain();
    *this = src;
}

Cat::Cat(std::string const& type) {
    this->_type = type;
    this->_brain = new Brain();
    std::cout << "String Cat constructor" << std::endl;
}

/*************/
/*DESTRUCTOR*/
/*************/

Cat::~Cat() {
    std::cout << "Default Cat destructor" << std::endl;
    delete this->_brain;
}

/**********/
/*OVERLOAD*/
/**********/

Cat&   Cat::operator= (Cat const& src) {
    std::cout << "Cat Deep Copy" << std::endl;
    *this->_brain = *src._brain;
    this->_type = src.getType();
    return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

void    Cat::makeSound() const { std::cout << "Miau!" << std::endl; }
void    Cat::brainAddr() const { std::cout << this->_brain << std::endl; }
