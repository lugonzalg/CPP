/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:23:27 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 20:44:07 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal ( void )
{
	std::cout << "Animal inhereted class Void constructor called";
}

Animal::Animal (const std::string type) : _type(type)
{
	std::cout << "Animal inhereted class String constructor called";
}

Animal::Animal ( const Animal& obj )
{
	*this = obj;
	std::cout << "Animal inhereted class constructor called";
}

Animal&	Animal::operator = ( const Animal& obj )
{
	this->setType(obj.getType());
	return (*this);
}

Animal::~Animal ( void )
{
	std::cout << "Animal inhereted class destructor called";
}

void	Animal::setType ( std::string type ) { this->_type = type; }
std::string	Animal::getType ( void ) const { return (this->_type ); }

void	Animal::makeSound(void) const
{
	std::cout << "iihqwwerqw" << std::endl;
}
