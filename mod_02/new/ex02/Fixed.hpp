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

        Fixed& operator=    (const Fixed&);
        Fixed operator+     (const Fixed&);
        Fixed operator--    ();
        Fixed operator--    (int);
        Fixed operator++    ();
        Fixed operator++    (int);
        Fixed operator-     (const Fixed&);
        Fixed operator*     (const Fixed&);
        Fixed operator/     (const Fixed&);

        bool    operator>   (const Fixed&) const;
        bool    operator<   (const Fixed&) const;
        bool    operator==  (const Fixed&) const;
        bool    operator!=  (const Fixed&) const;
        bool    operator<=  (const Fixed&) const;
        bool    operator>=  (const Fixed&) const;

        int     getRawBits() const;
        void    setRawBits(int const);
        int     toInt() const;
        float   toFloat() const;

        static const Fixed& max(const Fixed&, const Fixed&);
        static const Fixed& min(const Fixed&, const Fixed&);
};

std::ostream& operator<< (std::ostream&, const Fixed&);

#endif
