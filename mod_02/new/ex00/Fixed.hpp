#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int _fPoint;
        static const int _n_bits = 8;

    public:
        Fixed();
        Fixed(const Fixed&);
        ~Fixed();

        Fixed& operator= (const Fixed&);
        int     getRawBits() const;
        void    setRawBits(int const);
};

#endif
