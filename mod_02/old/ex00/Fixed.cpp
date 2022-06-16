/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:34:18 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/19 17:19:22 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fraction_bits = 8;

Fixed::Fixed ( void ) : _fixed_point_value(0) { std::cout << "Default constructor called" << std::endl; };

Fixed::Fixed ( Fixed &ref )
{
	this->_fixed_point_value = ref._fixed_point_value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed ( void ) { std::cout << "Destructor called" << std::endl; };

int	Fixed::getRawBits ( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fraction_bits);
}

void	Fixed::setRawBits ( const int raw ) { _fixed_point_value = raw; }

void	Fixed::operator = ( Fixed &ref )
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed_point_value = ref.getRawBits();
}
