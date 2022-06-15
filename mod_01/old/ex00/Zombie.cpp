/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:26:22 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/12 01:15:34 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->_name = "Default";
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie died: " << _name << std::endl;;
}

void	Zombie::_announce ( void )
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

