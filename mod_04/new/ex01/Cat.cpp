#include "Cat.hpp"
#include <iostream>

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

Cat::~Cat() {
    std::cout << "Default Cat destructor" << std::endl;
    delete this->_brain;
}

Cat&   Cat::operator= (Cat const& src) {
    (void)src;
    this->_type = "deep";
    delete this->_brain;
    this->_brain = new Brain("deep");
    //this->_brain = src._brain;
    return (*this);
}

void    Cat::makeSound() const { std::cout << "Miau!" << std::endl; }
