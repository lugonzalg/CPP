/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:34:44 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/04 21:56:52 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed
{
	public:
		Fixed	( void );
		Fixed	( int );
		Fixed	( float );
		Fixed 	( const Fixed &ref );
		~Fixed 	( void );

		int		getRawBits ( void ) const;
		void	setRawBits ( const int raw );
		float	toFloat	( void ) const;
		int		toInt ( void ) const;

		void	operator = ( const Fixed &ref );
	private:
		int					_fixed_point_value;
		static const int	_fraction_bits;
};

std::ostream	&operator << (std::ostream &ostream, const Fixed &ref );
