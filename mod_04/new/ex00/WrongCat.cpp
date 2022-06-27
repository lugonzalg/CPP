#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
    this->_type = "WrongCat";
    std::cout << "Default WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const& src) {
    std::cout << "Copy WrongCat constructor" << std::endl;
    *this = src;
}

WrongCat::WrongCat(std::string type) {
    this->_type = type;
    std::cout << "String WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "Default WrongCat destructor" << std::endl;
}

WrongCat&   WrongCat::operator= (WrongCat const& src) {
    this->_type = src._type;
    return (*this);
}

void    WrongCat::makeSound() const { std::cout << "Miau!" << std::endl; }
