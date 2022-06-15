/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 00:00:10 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/16 20:49:08 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	public:
			HumanA( std::string , Weapon &Weapon);
		void	attack ( void );
		void	setWeapon( std::string &);
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
