/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:10 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 22:59:27 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat ( void )
{
	this->_brain = new Brain;
	std::cout << "Cat inhereted class Void constructor called" << std::endl;
}

Cat::Cat ( const std::string type ) : Animal(type)
{
	this->_brain = new Brain;
	std::cout << "Cat inhereted class String constructor called" << std::endl;
}

Cat::Cat ( const Cat& obj )
{
	*this = obj;
	std::cout << "Cat inhereted class copy constructor called" << std::endl;
}

Cat::~Cat ( void )
{
	delete(this->getBrain_ref());
	std::cout << "Cat inhereted class destructor called" << std::endl;
}

Cat&	Cat::operator = ( const Cat& obj )
{
	this->setType(obj.getType());
	for (size_t i = 0; i < 100; i++)
		this->setBrain(i, obj.getBrain(i));
	return (*this);
}

void	Cat::setBrain(uint8_t pos, const std::string value)
{
	this->_brain->setIdeas(pos, value);
}

std::string	Cat::getBrain(uint8_t pos) const
{
	return (this->_brain->getIdeas(pos));
}

Brain	*Cat::getBrain_ref(void) const
{
	return (this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau" << std::endl;
}
