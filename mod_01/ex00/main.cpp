/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:55:05 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/12 01:17:25 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	Zombie	first;
	Zombie	*tmp;

	tmp = first.newZombie("Lukas");
	first.randomChump("Lukassssssss");
	delete tmp;
	return (0);
}
