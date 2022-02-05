/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:15:54 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/05 01:40:46 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *head;
	int		i;

	head = new Zombie[N];
	i = -1;
	while (++i < N)
	{
		head[i].ft_set_name(name);
		head[i].announce();
	}
	return (head);
}
