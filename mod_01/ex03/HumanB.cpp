/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:32:04 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/06 20:19:47 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB( std::string name )
{
	this->_name = name;
}

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with his " << *_weapon_type << std::endl;
}

void	HumanB::setWeapon( Weapon w)
{
	_weapon_type = w.getType();
}
