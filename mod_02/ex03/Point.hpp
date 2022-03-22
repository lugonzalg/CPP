/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:10:38 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/16 20:47:38 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
#define	POINT_HPP

#include "Fixed.hpp"

//https://huse360.home.blog/2019/12/14/como-saber-si-un-punto-esta-dentro-de-un-triangulo/

class Point
{
	public:
		Point	( void );
		Point	( float, float );
		Point	( const Point& );
		~Point	( void );

		Point&		operator = ( const Point& );
		float		ft_get_x( void ) const { return (_x.toFloat()); }
		float		ft_get_y( void ) const { return (_y.toFloat()); }
	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif
