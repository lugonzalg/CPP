/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:23:38 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 22:43:21 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	public:
		Animal ( void );
		Animal ( const std::string );
		Animal ( const Animal& );
		~Animal ( void );

		void		set_type ( const std::string );
		std::string	get_type ( void ) const;
	private:

	protected:
		std::string _type;
};

#endif
