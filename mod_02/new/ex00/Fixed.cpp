#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() {
    std::cout << "Default constructor" << std::endl;
    this->_fPoint = 0;
}

Fixed::Fixed(const Fixed& toCopy) {
    std::cout << "Copy constructor" << std::endl;
    *this = toCopy;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor" << std::endl;}

Fixed& Fixed::operator= (const Fixed& toCopy) {
    std::cout << "Assingnation opertor" << std::endl;
    this->_fPoint = toCopy._fPoint;
    return *this;
}

int     Fixed::getRawBits() const {
    std::cout << "getRawBits" << std::endl;
    return (this->_fPoint);
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits" << std::endl;
    this->_fPoint = raw;
}

float   Fixed::toFloat() {
    std::cout << "ToFloat" << std::endl;
    return (this->_fPoint / (1<<this->_scale));
}

int Fixed::toOnt() {
    std::cout << "ToInt" << std::endl;
    return (this->_fPoint * (1<<this->_scale));
}
