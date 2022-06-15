#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
   private:
        std::string _name;

   public:
        Zombie(std::string);
        ~Zombie(void);

};

Zombie* newZombie(std::string);
void    randomChump(std::string);

#endif
