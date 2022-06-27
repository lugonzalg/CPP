/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:23 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 22:59:29 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog ( void )
{
	this->_brain = new Brain;
	std::cout << "Dog inhereted class Void constructor called" << std::endl;
}

Dog::Dog ( const std::string type ) : Animal(type)
{
	this->_brain = new Brain;
	std::cout << "Dog inhereted class String constructor called" << std::endl;
}

Dog::Dog ( const Dog& obj )
{
	*this = obj;
	std::cout << "Dog inhereted class Copy constructor called" << std::endl;
}

Dog::~Dog ( void )
{
	delete(this->getBrain_ref());
	std::cout << "Dog inhereted class destructor called" << std::endl;
}

Dog&	Dog::operator = ( const Dog& obj )
{
	this->setType(obj.getType());
	for (size_t i = 0; i < 100; i++)
		this->setBrain(i, obj.getBrain(i));
	return (*this);
}

void	Dog::setBrain(uint8_t pos, std::string value)
{
	this->_brain->setIdeas(pos, value);
}

std::string	Dog::getBrain(uint8_t pos) const
{
	return (this->_brain->getIdeas(pos));
}

Brain	*Dog::getBrain_ref(void) const
{
	return (this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Guau" << std::endl;
}
