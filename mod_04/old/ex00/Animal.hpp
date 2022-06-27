/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:23:38 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 20:44:17 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal 		( void );
		Animal 		( const std::string );
		Animal 		( const Animal& );
		~Animal 	( void );

		void		setType(const std::string);
		std::string	getType(void) const;
		virtual void		makeSound(void) const;
		Animal&		operator = ( const Animal& obj );
	private:

	protected:
		std::string _type;
};

#endif
