#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(std:string);
        ~Weapon();

        void    set_type(std::string);
        std::string const& get_type(void) const;
};

#endif
