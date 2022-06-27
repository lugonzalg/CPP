/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:56:14 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:12 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
#define	CURE_HPP

#include <AMateria.hpp>

class Cure : public AMateria
{
	private:

	protected:

	public:
		Cure	();
		Cure	(std::string );
		Cure	(const Cure& );
		~Cure	();

		virtual AMateria* 	clone() const;
		std::string&		setTo_lower(std::string&);
		Cure&		operator=(const Cure&);
};

#endif
