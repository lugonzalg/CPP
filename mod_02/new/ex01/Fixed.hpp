#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _fPoint;
        static const int _scale = 8;

    public:
        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed&);
        ~Fixed();

        Fixed& operator= (const Fixed&);
        int     getRawBits() const;
        void    setRawBits(int const);
        int     toInt() const;
        float   toFloat() const;
};

std::ostream& operator<< (std::ostream&, const Fixed&);

#endif
