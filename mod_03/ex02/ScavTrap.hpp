/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:26:13 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/16 21:48:52 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap ( void );
		ScavTrap ( std::string );
		ScavTrap ( const ScavTrap& );
		~ScavTrap ( void );

		void		guardGate();
		ScavTrap& 	operator = (const ScavTrap& );
		std::string	get_surname ( void ) const;
		void		set_surname ( std::string );
	private:
		std::string	_surname;
};

#endif
