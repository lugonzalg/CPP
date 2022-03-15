/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:34:18 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/15 20:39:03 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fraction_bits = 8;

Fixed::Fixed ( void ) : _fixed_point_value(0)
{
	//std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed ( int num ) : _fixed_point_value(num << _fraction_bits)
{
	//std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed ( float num )
{
	//std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(num * (1 << _fraction_bits)));
};

Fixed::Fixed ( const Fixed &obj )
{
	//std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point_value = obj._fixed_point_value;
}

Fixed::~Fixed ( void ) { //std::cout << "Destructor called" << std::endl; };

int	Fixed::getRawBits ( void ) const { return (_fixed_point_value); }

void	Fixed::setRawBits ( const int raw ) { _fixed_point_value = raw; }

float	Fixed::toFloat ( void ) const { return((float)_fixed_point_value / (float)(1 << _fraction_bits)); }

int	Fixed::toInt ( void ) const { return (roundf(_fixed_point_value / (1 << _fraction_bits))); }

Fixed&	Fixed::operator = ( const Fixed &obj )
{
	//std::cout << "Assignation operator called" << std::endl;
	_fixed_point_value = obj._fixed_point_value;
	return (*this);
}

Fixed	Fixed::operator * (const Fixed& obj)
{
	Fixed	res(this->toFloat() * obj.toFloat());
	return (res);
}

Fixed	Fixed::operator + (const Fixed& obj)
{
	Fixed	res(this->toFloat() + obj.toFloat());
	return (res);
}

Fixed	Fixed::operator - (const Fixed& obj)
{
	Fixed	res(this->toFloat() - obj.toFloat());
	return (res);
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed	res;

	res = *this;
	++(*this);
	return (res);
} //unary operation 

Fixed	Fixed::operator ++ ( void )
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
} //unary operation  

bool	Fixed::operator == ( const Fixed& obj) const { return (this->toFloat() == obj.toFloat()); }

bool	Fixed::operator != ( const Fixed& obj) const { return (this->toFloat() != obj.toFloat()); }

bool	Fixed::operator < ( const Fixed& obj) const { return (this->toFloat() < obj.toFloat()); }

bool	Fixed::operator <= ( const Fixed& obj) const { return (*this < obj or *this == obj); }

bool	Fixed::operator > ( const Fixed& obj) const { return (this->toFloat() > obj.toFloat()); }

bool	Fixed::operator >= ( const Fixed& obj) const { return (*this > obj or *this == obj); }

const Fixed&	Fixed::min ( const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

const Fixed&	Fixed::max ( const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}
