#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    this->_type = "Cat";
    std::cout << "Default constructor" << std::endl;
}

Cat::Cat(Cat const& src) {
    std::cout << "Copy constructor" << std::endl;
    *this = src;
}

Cat::Cat(std::string type) {
    this->_type = type;
    std::cout << "String constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Default destructor" << std::endl;
}

Cat&   Cat::operator= (Cat const& src) {
    this->_type = src._type;
    return (*this);
}

void    Cat::makeSound() const { std::cout << "Miau!" << std::endl; }
