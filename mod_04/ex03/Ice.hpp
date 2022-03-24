/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:21:51 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:10 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
#define	ICE_HPP

#include <AMateria.hpp>

class Ice : public AMateria
{
	private:

	protected:

	public:
		Ice		();
		Ice		(std::string );
		Ice		(const Ice& );
		~Ice	();

		AMateria			*clone	() const;
		std::string&	setTo_lower(std::string&);
		Ice&		operator=(const Ice&);
};

#endif
