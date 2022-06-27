/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:49:30 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 21:18:31 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <iostream>

FragTrap::FragTrap ( void ) : ClapTrap()
{
	this->set_hitpoints(100);
	this->set_energy_points(100);
	this->set_attack_damage(30);
	std::cout << "FragTrap Void contructor called" << std::endl;
}

FragTrap::FragTrap ( std::string name ) : ClapTrap(name)
{
	this->set_hitpoints(100);
	this->set_energy_points(100);
	this->set_attack_damage(30);
	std::cout << "FragTrap Void contructor called" << std::endl;
}

FragTrap::FragTrap ( const FragTrap& obj )
{
	*this = obj;
	std::cout << "FragTrap Copy contructor called" << std::endl;
}

FragTrap::~FragTrap ( void ) { std::cout << "FragTrap Destructor called" << std::endl; }

FragTrap& FragTrap::operator = ( const FragTrap& obj )
{
	this->set_name(obj.get_name());
	this->set_hitpoints(obj.get_hitpoints());
	this->set_energy_points(obj.get_energy_points());
	this->set_attack_damage(obj.get_attack_damage());
	return (*this);
}

void	FragTrap::highFivesGuys ( void ) { std::cout << "Positive high five request D:" << std::endl; }
