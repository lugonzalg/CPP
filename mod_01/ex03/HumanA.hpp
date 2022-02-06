/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:00:10 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/06 20:14:56 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public:
				HumanA( std::string , Weapon );
		void	attack ( void );
		void	setWeapon( std::string );
	private:
		const std::string *_weapon_type;
		std::string	_name;
};

#endif
