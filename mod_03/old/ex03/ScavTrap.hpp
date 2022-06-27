/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:26:13 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 20:31:44 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap ( void );
		ScavTrap ( const std::string );
		ScavTrap ( const ScavTrap& );
		~ScavTrap ( void );

		void		guardGate();
		ScavTrap& 	operator = (const ScavTrap& );
	private:
		std::string	_surname;
};

#endif
