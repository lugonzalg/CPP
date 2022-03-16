/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:49:36 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/16 21:56:56 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
	public:
		FragTrap ( void );
		FragTrap ( std::string );
		FragTrap ( const FragTrap& );

		void	highFivesGuys(void);
	private:
};

#endif
