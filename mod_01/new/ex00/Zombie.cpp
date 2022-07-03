/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 18:47:17 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/01 18:56:57 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << name << " braaaaainz" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " ouch i'm diying, again¿" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "Hey :D" << std::endl;
}
