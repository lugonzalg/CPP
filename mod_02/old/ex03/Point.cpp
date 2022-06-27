/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:16:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/15 20:38:26 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point ( void ) : _x(Fixed(0)), _y(Fixed(0)) {};

Point::Point ( const float x, const float y ) : _x(Fixed(x)),  _y(Fixed(y)) {};

Point::Point ( const Point& obj) : _x(Fixed(obj._x.toFloat())), _y(Fixed(obj._y.toFloat())) {};

Point::~Point( void )
{
}

Point&	Point::operator = ( const Point& obj )
{
	(void)obj;
	//std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
