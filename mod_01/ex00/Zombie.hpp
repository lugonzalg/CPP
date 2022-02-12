/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 19:23:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/12 01:15:35 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	public:
		Zombie ( void );
		~Zombie ( void );

		void randomChump ( std::string name );
		Zombie *newZombie ( std::string name );
	private:
		void		_announce( void );
		std::string	_name;
};

#endif //ZOMBIE_HPP 
