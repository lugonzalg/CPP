#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
    private:
        std::string _name;
        Weapon& _weapon;

    public:
        //HumanA();
        HumanA(std::string, Weapon&);
        ~HumanA();

        void    attack();
        void    setWeapon(Weapon&);
};

#endif
