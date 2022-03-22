/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:49:36 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 20:43:59 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include <ClapTrap.hpp>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap ( void );
		FragTrap ( const std::string );
		FragTrap ( const FragTrap& );
		~FragTrap ( void );

		void	highFivesGuys(void);
		FragTrap& 	operator = (const FragTrap& );
	private:
};

#endif
