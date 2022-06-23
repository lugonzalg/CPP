/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:17:17 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 21:12:08 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
#define	DIAMONDTRAP_HPP

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap ( void );
		DiamondTrap ( const std::string );
		DiamondTrap ( const DiamondTrap& );
		~DiamondTrap ( void );

		DiamondTrap& 	operator = (const DiamondTrap& );
		using			ScavTrap::attack;
		void			whoAmI( void );
		std::string		get_Dname ( void ) const;
		void			set_Dname ( std::string );
	private:
		std::string _Dname;

};

#endif
