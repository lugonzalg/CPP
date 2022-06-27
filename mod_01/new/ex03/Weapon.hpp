#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon();
        Weapon(std::string);
        ~Weapon();

        void    setType(std::string);
        std::string const&  get_type(void) const;
};

#endif
