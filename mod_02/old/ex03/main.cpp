/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 03:32:45 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/15 20:38:32 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	e[2];	//x = 0 | y = 1
	float	d[2];	//x = 0 | y = 1
	float	w[2];
	
	e[0] = b.ft_get_x() -  a.ft_get_x();
	e[1] = b.ft_get_y() -  a.ft_get_y();
	d[0] = c.ft_get_x() -  a.ft_get_x();
	d[1] = c.ft_get_y() -  a.ft_get_y();

	w[0] = (e[0] * (a.ft_get_y() - point.ft_get_y()) + e[1] * (point.ft_get_x() - a.ft_get_x())) / (d[0] * e[1] - d[1] * e[0]);
	w[1] = (point.ft_get_y() - a.ft_get_y() - w[0] * d[1]) / e[1];
	return (w[0] + w[1] <= 1 && w[0] > 0 && w[1] > 0);
}

std::ostream&	operator << ( std::ostream& ostream, const Fixed &obj )
{
	std::cout << obj.toFloat();
	return (ostream);
}

int main( void ) {
	const Point a(0.00000, 0.00000);
	const Point b(1.00000, 1.00000);
	const Point c(0.00000, 2.00000);
	const Point d(0.50000, 1.00000);

	std::cout << bsp(a, b, c, d) << std::endl;
	return 0;
}
