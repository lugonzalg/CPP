/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 23:59:37 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/06 20:20:06 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon weapon)
{
	this->_name = name;
	this->_weapon_type = weapon.getType();
}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with his " << *_weapon_type << std::endl;
}

void	HumanA::setWeapon( std::string str )
{
	this->_weapon_type = &str;
}
