#include "Fixed.hpp"

Fixed::Fixed() {this->_fPoint = 0;}

Fixed::Fixed(const Fixed& toCopy) { *this = toCopy; }

Fixed::~Fixed() {}

Fixed& Fixed::operator= (const Fixed& toCopy) {
    this->_fPoint = toCopy._fPoint;
    return *this;
}

int     Fixed::getRawBits() const {return (this->_fPoint);}

void    Fixed::setRawBits(int const raw) {this->_fPoint = raw;}
