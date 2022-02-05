/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 20:26:37 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/04 21:18:37 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *randomChump (std::string str )
{
	Zombie	*tmp;

	tmp =  new Zombie(str);
	tmp->announce();
	return (tmp);
}
