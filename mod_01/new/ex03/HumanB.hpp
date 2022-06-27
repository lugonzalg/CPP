#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;

    public:
        HumanB();
        HumanB(std::string);
        ~HumanB();

        void    attack();
        void    setWeapon(Weapon&);
};

#endif
