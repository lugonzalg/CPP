/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:30 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 22:59:30 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
	public:
		Dog 		( void );
		Dog 		( const std::string );
		Dog 		( const Dog& );
		~Dog 		( void );

		Dog&	operator = ( const Dog& obj );
		virtual	void	makeSound(void) const;
		void		setBrain(uint8_t, const std::string);
		std::string	getBrain(uint8_t) const;
		Brain	*getBrain_ref(void) const;
	private:
		Brain		*_brain;

	protected:
};

#endif
