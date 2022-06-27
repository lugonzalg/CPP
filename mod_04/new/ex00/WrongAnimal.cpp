#include "WrongAnimal.hpp"
#include <iostream>

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

WrongAnimal::~WrongAnimal() {
    std::cout << "Default WrongAnimal destructor" << std::endl;
}

WrongAnimal&   WrongAnimal::operator= (WrongAnimal const& src) {
    this->_type = src._type;
    return (*this);
}

void    WrongAnimal::makeSound() const { std::cout << "qiwemfwefqd" << std::endl;}

std::string const&	WrongAnimal::getType() const { return (this->_type); }
