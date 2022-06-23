/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:20:34 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 20:30:44 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap ( void );
		ClapTrap ( const std::string );
		ClapTrap ( const ClapTrap& );
		~ClapTrap ( void );

		void	attack (std::string const& );
		void	takeDamage (unsigned int );
		void	beRepaired (unsigned int );
		ClapTrap&	operator = ( const ClapTrap& );
		std::string	get_name ( void ) const;
		unsigned int get_hitpoints ( void ) const;
		unsigned int get_energy_points ( void ) const;
		unsigned int get_attack_damage ( void ) const;

		void	set_name ( std::string );
		void 	set_hitpoints ( unsigned int );
		void 	set_energy_points ( unsigned int );
		void 	set_attack_damage ( unsigned int );
	private:
		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};
#endif
