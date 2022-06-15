#include "Zombie.hpp"

int main(int ac, char *av[])
{
    (void)ac;
    (void)av;
    Zombie* list;

    list = zombieHorde(42, "lukas");
    delete [] list;
    return 0;
}
