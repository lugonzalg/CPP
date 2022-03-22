/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:23 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 22:43:23 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Dog::Dog ( void )
{
	std::cout << "Dog base class Void constructor called";
}

Dog::Dog ( const std::string name )
{
	
	std::cout << "Dog base class String constructor called";
}

Dog::Dog ( const Dog& obj )
{
	*this = obj;
	std::cout << "Dog base class destructor called";
}

Cat&	Cat::operator = ( const Cat& obj )
{
	this->set_type(obj.get_type);
}

void	Cat::set_type ( std::string type ) { this->_type = type; }
std::string	Cat::get_type ( void ) const { return (this->_type ); }
