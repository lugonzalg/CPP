/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:23 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 20:40:18 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog ( void )
{
	std::cout << "Dog inhereted class Void constructor called";
}

Dog::Dog ( const std::string type ) : Animal(type)
{
	
	std::cout << "Dog inhereted class String constructor called";
}

Dog::Dog ( const Dog& obj )
{
	*this = obj;
	std::cout << "Dog inhereted class Copy constructor called";
}

Dog::~Dog ( void )
{
	std::cout << "Dog inhereted class Void destructor called";
}

Dog&	Dog::operator = ( const Dog& obj )
{
	this->setType(obj.getType());
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Guau" << std::endl;
}
