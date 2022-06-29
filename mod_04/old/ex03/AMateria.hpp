/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:53:42 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:14 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
#define	AMATERIA_HPP

#include <iostream>

class AMateria
{
	private:
		std::string	_type;

	protected:

	public:
		AMateria	();
		AMateria	(std::string const& );
		AMateria	(const AMateria&);

		std::string const& 	getType() const; //Returns the materia type
		void				setType(std::string const&);
		virtual AMateria* 	clone() const = 0;
		virtual void		use(ICharacter& );
		AMateria&			operator=(const AMateria&);
};

#endif
