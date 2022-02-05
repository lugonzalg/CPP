/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:23:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/04 20:59:22 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:

		Zombie ( std::string );
		~Zombie ( void );

		Zombie	*newZombie ( std::string );
		void	announce( void );
	private:
		std::string	_name;
};

Zombie *newZombie ( std::string name );
Zombie *randomChump ( std::string name );

#endif //ZOMBIE_HPP 
