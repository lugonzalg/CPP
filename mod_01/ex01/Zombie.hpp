/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:23:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/05 01:40:46 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:

		~Zombie ( void );

		void	ft_set_name( std::string );
		Zombie	*newZombie ( std::string );
		void	announce( void );
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );
Zombie *newZombie ( std::string name );
Zombie *randomChump ( std::string name );

#endif //ZOMBIE_HPP 
