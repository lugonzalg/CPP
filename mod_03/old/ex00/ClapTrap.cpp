/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:20:27 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 21:17:33 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ( void ) : _name("Lukas"), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Void constructor called" << std::endl;
}

ClapTrap::ClapTrap ( const std::string name ) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "String constructor called" << std::endl;
}

ClapTrap::ClapTrap ( const ClapTrap& obj ) : _name(obj.get_name()), _hitpoints(obj.get_hitpoints()), _energy_points(obj.get_energy_points()), _attack_damage(obj.get_attack_damage())
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap ( void )
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack (std::string const& target)
{
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage";
	std::cout << std::endl;
}

void	ClapTrap::takeDamage (unsigned int amount)
{
	std::cout << this->_name << " took " << amount << " damage" << std::endl;
	std::cout << this->_name << " hitpoints, reduced to: " << this->_hitpoints << std::endl;
}

void	ClapTrap::beRepaired (unsigned int amount)
{
	std::cout << this->_name << " healed for :" << amount << std::endl;
	std::cout << this->_name << " hitpoints, increased to: " << this->_hitpoints << std::endl;
}

ClapTrap&	ClapTrap::operator = ( const ClapTrap& obj )
{
	this->_name = obj.get_name();
	this->_attack_damage = obj.get_energy_points();
	this->_hitpoints = obj.get_attack_damage();
	return (*this);
}

std::string		ClapTrap::get_name ( void ) const { return (this->_name); }
unsigned int	ClapTrap::get_hitpoints ( void ) const { return (this->_hitpoints); }
unsigned int	ClapTrap::get_energy_points ( void ) const { return (this->_energy_points); }
unsigned int	ClapTrap::get_attack_damage ( void ) const { return (this->_attack_damage); }
