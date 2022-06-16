#include "Fixed.hpp"
#include <iostream>

int main()
{
    Fixed fixed, fixed2;

    fixed.setRawBits(123);
    fixed2 = fixed;
    std::cout << fixed.getRawBits() << std::endl << fixed2.getRawBits();
    return 0;
}
