#include "Fixed.hpp"
#include <iostream>

#include <iostream>
int main( void ) {
    Fixed a, c;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;

    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( c, b ) << std::endl;
    std::cout << Fixed::min( c, b ) << std::endl;

    std::cout << "DIV: " << (a / b) << std::endl;
    std::cout << "PROO: " << (a * b) << std::endl;
    std::cout << "SUM: " << (a + b) << std::endl;
    std::cout << "REST: " << (a - b) << std::endl;
    return 0;
}
