/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:24:33 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/16 21:48:52 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap	hero_A;
	ClapTrap	hero_B("Jimmy");
	ScavTrap	hero_AB;

	hero_AB.guardGate();
	hero_A.attack(hero_B.get_name());
	hero_B.takeDamage(hero_A.get_attack_damage());
	return (0);
}
