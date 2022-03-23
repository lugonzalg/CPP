/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:15 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 20:40:17 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <Animal.hpp>

class Cat : public Animal
{
	public:
		Cat 		( void );
		Cat 		( const std::string );
		Cat 		( const Cat& );
		~Cat 		( void );

		Cat&	operator = ( const Cat& obj );
		virtual	void	makeSound(void) const;
	private:

	protected:
};

#endif
