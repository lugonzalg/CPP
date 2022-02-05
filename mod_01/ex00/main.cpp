/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:55:05 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/05 00:12:51 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main( void )
{
	Zombie	*tmp[2];

	tmp[0] = newZombie("Lukas");
	tmp[1] = randomChump("Lukassssssss");
	delete tmp[0];
	delete tmp[1];
	return (0);
}
