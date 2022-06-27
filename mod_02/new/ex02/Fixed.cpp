#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fPoint(0) {/*std::cout << "Default constructor" << std::endl;*/}

Fixed::Fixed(const Fixed& toCopy) {
    //std::cout << "Copy constructor" << std::endl;
    *this = toCopy;
}

Fixed::Fixed(const int num) : _fPoint(num << this->_scale){
    //std::cout << "Int constructor" << std::endl;
}

Fixed::Fixed(const float num) : _fPoint(roundf(num * (1<<this->_scale))) {
    //std::cout << "Float constructor" << std::endl;
}

Fixed::~Fixed() { /*std::cout << "Destructor" << std::endl;*/}

Fixed& Fixed::operator= (const Fixed& toCopy) {
    //std::cout << "Assingnation operator" << std::endl;
    this->_fPoint = toCopy._fPoint;
    return (*this);
}

Fixed Fixed::operator+ (const Fixed& toCopy) {
    Fixed   result(this->toFloat() + toCopy.toFloat());

    //std::cout << "Sum operator" << std::endl;
    return (result);
}

//PREFIX SUM
Fixed Fixed::operator++ () {
    ++this->_fPoint;

    //std::cout << "Double PreffixSum operator" << std::endl;
    return (*this);
}

Fixed Fixed::operator++ (int) {
    Fixed res(*this);

    ++(*this);

    //std::cout << "Double PreffixSum operator" << std::endl;
    return (res);
}

Fixed Fixed::operator- (const Fixed& toCopy) {
    Fixed   result(this->toFloat() - toCopy.toFloat());

    //std::cout << "Rest operator" << std::endl;
    return (result);
}

Fixed Fixed::operator* (const Fixed& toCopy) {
    Fixed   result(this->toFloat() * toCopy.toFloat());

    //std::cout << "Multi operator" << std::endl;
    return (result);
}

Fixed Fixed::operator/ (const Fixed& toCopy) {
    Fixed   result(this->toFloat() / toCopy.toFloat());

    //std::cout << "Div operator" << std::endl;
    return (result);
}

int     Fixed::getRawBits() const {
    //std::cout << "getRawBits" << std::endl;
    return (this->_fPoint);
}

void    Fixed::setRawBits(int const raw) {
    //std::cout << "setRawBits" << std::endl;
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

bool    Fixed::operator> (const Fixed& cmp) const { return (this->toFloat() > cmp.toFloat());}
bool    Fixed::operator< (const Fixed& cmp) const { return (this->toFloat() < cmp.toFloat());}
bool    Fixed::operator== (const Fixed& cmp) const { return (this->toFloat() == cmp.toFloat());}
bool    Fixed::operator!= (const Fixed& cmp) const { return (this->toFloat() != cmp.toFloat());}
bool    Fixed::operator>= (const Fixed& cmp) const { return (*this > cmp or *this == cmp);}
bool    Fixed::operator<= (const Fixed& cmp) const { return (*this < cmp or *this == cmp);}

const Fixed&  Fixed::max(const Fixed& opt_a, const Fixed& opt_b) {
    if (opt_a > opt_b)
        return (opt_a);
    return (opt_b);
}

const Fixed&  Fixed::min(const Fixed& opt_a, const Fixed& opt_b) {
    if (opt_a < opt_b)
        return (opt_a);
    return (opt_b);
}
