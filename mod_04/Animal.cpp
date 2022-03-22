/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:23:27 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 22:43:22 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

Animal::Animal ( void )
{
	std::cout << "Animal base class Void constructor called";
}

Animal::Animal ( const std::string name )
{
	
	std::cout << "Animal base class String constructor called";
}

Animal::Animal ( const Animal& obj )
{
	*this = obj;
	std::cout << "Animal base class destructor called";
}

Animal&	Animal::operator = ( const Animal& obj )
{
	this->set_type(obj.get_type);
}

void	Animal::set_type ( std::string type ) { this->_type = type; }
std::string	Animal::get_type ( void ) const { return (this->_type ); }
