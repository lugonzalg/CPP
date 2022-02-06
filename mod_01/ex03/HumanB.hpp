/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:30:51 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/06 20:22:20 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	public:
				HumanB( std::string );
		void	attack ( void );
		void	setWeapon( Weapon );
	private:
		const std::string *_weapon_type;
		std::string	_name;
};

#endif
