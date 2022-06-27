/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:34:44 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/16 20:47:02 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		Fixed	( void );
		Fixed	( int );
		Fixed	( float );
		Fixed 	( const Fixed &obj );
		~Fixed 	( void );

		int		getRawBits ( void ) const;
		void	setRawBits ( const int raw );
		float	toFloat	( void ) const;
		int		toInt ( void ) const;
		static const Fixed&	min(const Fixed& obj1, const Fixed& obj2);
		static const Fixed&	max(const Fixed& obj1, const Fixed& obj2);

		//Assign operation
		void	operator = ( const Fixed &obj );
		//Comparison operations
		bool	operator > (const Fixed& obj) const;
		bool	operator >= (const Fixed& obj) const;
		bool	operator < (const Fixed& obj) const;
		bool	operator <= (const Fixed& obj) const;
		bool	operator == (const Fixed& obj) const;
		bool	operator != (const Fixed& obj) const;
		//Arithmetic operations
		Fixed	operator * ( const Fixed &obj );
		Fixed	operator / ( const Fixed &obj );
		Fixed	operator + ( const Fixed &obj );
		Fixed	operator - ( const Fixed &obj );
		Fixed	operator ++ ( void );
		Fixed	operator ++ ( int num );
	private:
		int					_fixed_point_value;
		static const int	_fraction_bits;
};

std::ostream	&operator << (std::ostream &ostream, const Fixed &obj );

#endif
