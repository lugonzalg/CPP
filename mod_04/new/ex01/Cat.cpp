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
    *this = src;
}

Cat::Cat(std::string const& type) {
    this->_type = type;
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

void    Cat::makeSound() const { std::cout << "Miau!" << std::endl; }
