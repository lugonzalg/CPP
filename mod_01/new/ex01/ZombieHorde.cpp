#include "Zombie.hpp"

/*
  First allocate enough space for the object array
  Second call to object for each slot
*/

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* list = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        list[i].set_name(name);
        list[i].announce();
    }
    return list;
}
