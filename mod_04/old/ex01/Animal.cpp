/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:23:27 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 22:59:25 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal ( void )
{
	std::cout << "Animal Base class Void constructor called" << std::endl;
	this->setType("QWERTY");
}

Animal::Animal (const std::string type) : _type(type)
{
	std::cout << "Animal Base class String constructor called" << std::endl;
}

Animal::Animal ( const Animal& obj )
{
	*this = obj;
	std::cout << "Animal Base class constructor called" << std::endl;
}

Animal&	Animal::operator = ( const Animal& obj )
{
	this->setType(obj.getType());
	return (*this);
}

Animal::~Animal ( void )
{
	std::cout << "Animal Base class destructor called" << std::endl;
}

void	Animal::setType ( std::string type ) { this->_type = type; }
std::string	Animal::getType ( void ) const { return (this->_type ); }

void	Animal::makeSound(void) const
{
	std::cout << "iihqwwerqw" << std::endl;
}
