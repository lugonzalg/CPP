/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:20:53 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/06 20:31:55 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string *Weapon::getType ( void )
{
	return (&this->_type);
}

void	Weapon::setType ( std::string str )
{
	this->_type = str;
}

Weapon::Weapon( std::string str)
{
	_type = str;	
}
