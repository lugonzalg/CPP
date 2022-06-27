/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:34:18 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/05 14:51:39 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fraction_bits = 8;

Fixed::Fixed ( void ) : _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed ( int num ) : _fixed_point_value(num << _fraction_bits)
{
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed ( float num )
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(num * (1 << _fraction_bits)));
};

Fixed::Fixed ( const Fixed &ref )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point_value = ref._fixed_point_value;
}

Fixed::~Fixed ( void ) { std::cout << "Destructor called" << std::endl; };

int	Fixed::getRawBits ( void ) const { return (_fixed_point_value); }

void	Fixed::setRawBits ( const int raw ) { _fixed_point_value = raw; }

void	Fixed::operator = ( const Fixed &ref )
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed_point_value = ref.getRawBits();
}

float	Fixed::toFloat ( void ) const { return((float)_fixed_point_value / (float)(1 << _fraction_bits)); }

int	Fixed::toInt ( void ) const { return (roundf(_fixed_point_value / (1 << _fraction_bits))); }
