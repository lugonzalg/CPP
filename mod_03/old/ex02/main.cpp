/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:24:33 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 20:36:22 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main ( void )
{
	ClapTrap	hero_A;
	ClapTrap	hero_B("Jimmy");
	ScavTrap	hero_AB("qwer");
	FragTrap	hero_AC("qwer");

	hero_AB.guardGate();
	hero_A.attack(hero_B.get_name());
	hero_B.takeDamage(hero_A.get_attack_damage());
	hero_AC.highFivesGuys();
	return (0);
}
