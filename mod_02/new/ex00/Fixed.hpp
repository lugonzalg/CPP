#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int _fPoint;
        static const int _scale = 8;

    public:
        Fixed();
        Fixed(const Fixed&);
        Fixed(const int);
        ~Fixed();

        Fixed& operator= (const Fixed&);

        int     toInt();
        float   toFloat();
        int     getRawBits() const;
        void    setRawBits(int const);
};

#endif
