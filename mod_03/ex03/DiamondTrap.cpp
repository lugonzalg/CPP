/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:17:12 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 21:19:50 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <DiamondTrap.hpp>
#include <iostream>

DiamondTrap::DiamondTrap ( void ) : ScavTrap(), FragTrap()
{
	this->set_hitpoints(FragTrap::get_energy_points());
	this->set_energy_points(ScavTrap::get_energy_points());
	this->set_attack_damage(FragTrap::get_attack_damage());
	std::cout << "DiamondTrap void constructor called" << std::endl;
}

DiamondTrap::DiamondTrap ( const std::string name ) : ScavTrap(name), FragTrap(name)
{
	this->set_Dname(name);
	this->set_hitpoints(FragTrap::get_energy_points());
	this->set_energy_points(ScavTrap::get_energy_points());
	this->set_attack_damage(FragTrap::get_attack_damage());
	std::cout << "DiamondTrap String constructor called" << std::endl;
}

DiamondTrap::DiamondTrap ( const DiamondTrap& obj )
{
	*this = obj;
}

DiamondTrap& DiamondTrap::operator = ( const DiamondTrap& obj )
{
	this->set_Dname(obj.get_Dname());
	this->set_name(obj.get_name());
	this->set_hitpoints(obj.get_hitpoints());
	this->set_attack_damage(obj.get_attack_damage());
	this->set_energy_points(obj.get_energy_points());
	return (*this);
}

DiamondTrap::~DiamondTrap ( void ) { std::cout << "DiamondTrap destructor called" << std::endl;  }

void	DiamondTrap::set_Dname ( std::string name ) { this->_Dname = name; }
std::string	DiamondTrap::get_Dname ( void ) const { return (this->_Dname); }

void	DiamondTrap::whoAmI ( void )
{
	std::cout << ClapTrap::get_name() << std::endl;
	std::cout << this->get_Dname() << std::endl;
}
