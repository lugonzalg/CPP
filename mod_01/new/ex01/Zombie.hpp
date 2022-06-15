#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
   private:
        std::string _name;

   public:
        Zombie(void);
        Zombie(std::string);
        ~Zombie(void);

        void    announce(void);
        void    set_name(std::string);

};

Zombie* zombieHorde(int, std::string);

#endif
