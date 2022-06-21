#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fPoint(0) {std::cout << "Default constructor" << std::endl;}

Fixed::Fixed(const Fixed& toCopy) {
    std::cout << "Copy constructor" << std::endl;
    *this = toCopy;
}

Fixed::Fixed(const int num) : _fPoint(num << this->_scale){
    std::cout << "Int constructor" << std::endl;
}

Fixed::Fixed(const float num) : _fPoint(roundf(num * (1<<this->_scale))) {
    std::cout << "Float constructor" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor" << std::endl;}

Fixed& Fixed::operator= (const Fixed& toCopy) {
    std::cout << "Assingnation operator" << std::endl;
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

float   Fixed::toFloat() const {
    //std::cout << "ToFloat" << std::endl;
    return (float(this->_fPoint) / float(1<<this->_scale));
}

int Fixed::toInt() const {
    //std::cout << "ToInt" << std::endl;
    return (this->_fPoint / (1<<this->_scale));
}

std::ostream&   operator<< (std::ostream& os, const Fixed& src)
{
    os << src.toFloat();
    return (os);
}
