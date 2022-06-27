/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:30 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 20:40:19 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>

class Dog : public Animal
{
	public:
		Dog 		( void );
		Dog 		( const std::string );
		Dog 		( const Dog& );
		~Dog 		( void );

		Dog&	operator = ( const Dog& obj );
		virtual	void	makeSound(void) const;
	private:

	protected:
};

#endif
