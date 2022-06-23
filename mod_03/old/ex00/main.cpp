#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap	hero_A;
	ClapTrap	hero_B("Jimmy");
	ClapTrap	hero_C(hero_B);

	hero_A.attack(hero_B.get_name());
	hero_B.takeDamage(hero_A.get_attack_damage());
	return (0);
}
