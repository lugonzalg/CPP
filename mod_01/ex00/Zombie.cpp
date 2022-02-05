/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:26:22 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/05 00:12:34 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	Zombie::_name = name;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie died: " << _name << std::endl;;
}

void	Zombie::announce ( void )
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

