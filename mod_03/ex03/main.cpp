/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:24:33 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 20:53:08 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ( void )
{
	//ClapTrap	hero_A;
	//ClapTrap	hero_B("Jimmy");
	//ScavTrap	hero_AB;
	//FragTrap	hero_AC;
	DiamondTrap	hero_AD("Jeremy");

	//hero_AB.guardGate();
	//hero_A.attack(hero_B.get_name());
	//hero_B.takeDamage(hero_A.get_attack_damage());
	//hero_AC.highFivesGuys();
	hero_AD.highFivesGuys();
	hero_AD.whoAmI();
	//hero_AD.attack(hero_AC.get_name());
	return (0);
}
