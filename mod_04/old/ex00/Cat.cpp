/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:10 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 20:40:16 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat ( void )
{
	std::cout << "Cat inhereted class Void constructor called";
}

Cat::Cat ( const std::string type ) : Animal(type)
{
	std::cout << "Cat inhereted class String constructor called";
}

Cat::Cat ( const Cat& obj )
{
	*this = obj;
	std::cout << "Cat inhereted class constructor called";
}

Cat::~Cat ( void )
{
	std::cout << "Cat inhereted class destructor called";
}

Cat&	Cat::operator = ( const Cat& obj )
{
	this->setType(obj.getType());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau" << std::endl;
}
