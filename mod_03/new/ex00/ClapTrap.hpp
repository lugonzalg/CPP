/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:31:48 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/08 17:33:30 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energy;
		unsigned int	_damage;

	public:

		ClapTrap();
		ClapTrap(std::string const&);
		ClapTrap(ClapTrap const&);
		~ClapTrap();

		ClapTrap&	operator= (ClapTrap const&);

		void	attack(std::string const&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);

		std::string&	getName();
		unsigned int	getDamage();
		unsigned int	getEnergy();
		unsigned int	getHitPoints();

};
#endif 
