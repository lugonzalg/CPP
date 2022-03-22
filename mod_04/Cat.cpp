/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:28:10 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/22 21:40:54 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Cat::Cat ( void )
{
	std::cout << "Cat base class Void constructor called";
}

Cat::Cat ( const std::string name )
{
	
	std::cout << "Cat base class String constructor called";
}

Cat::Cat ( const Cat& obj )
{
	*this = obj;
	std::cout << "Cat base class destructor called";
}

Cat&	Cat::operator = ( const Cat& obj )
{
	this->set_type(obj.get_type);
}

void	Cat::set_type ( std::string type ) { this->_type = type; }
std::string	Cat::get_type ( void ) const { return (this->_type ); }
