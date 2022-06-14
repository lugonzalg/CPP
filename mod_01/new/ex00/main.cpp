#include "Zombie.hpp"

int main(int ac, char *av[])
{
    (void)ac;
    (void)av;
    Zombie *refZombie;

    refZombie = newZombie("paco");
    refZombie.announce();
    randomChump("Jimmy");
    delete refZombie;
    return 0;
}
