/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:26:05 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 20:31:37 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void ) : ClapTrap()
{
	this->set_hitpoints(100);
	this->set_energy_points(50);
	this->set_attack_damage(50);
	std::cout << "ScavTrap Void contructor called" << std::endl;
}

ScavTrap::ScavTrap ( const std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap String contructor called" << std::endl;
}

ScavTrap::ScavTrap ( const ScavTrap& obj )
{
	*this = obj;
	std::cout << "ScavTrap Copy contructor called" << std::endl;
}

ScavTrap::~ScavTrap ( void ) { std::cout << "ScavTrap Constructor called" << std::endl; }

ScavTrap& ScavTrap::operator = ( const ScavTrap& obj )
{
	this->set_name(obj.get_name());
	this->set_hitpoints(obj.get_hitpoints());
	this->set_energy_points(obj.get_energy_points());
	this->set_attack_damage(obj.get_attack_damage());
	return (*this);
}

void	ScavTrap::guardGate ( void ) { std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl; }
