/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:56:01 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:10 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice inhereted class Void constructori called";
}

Ice::Ice(std::string type) : AMateria(this->setTo_lower(type))
{
	std::cout << "Ice inhereted class String constructor called";
}

Ice::Ice(const Ice& obj)
{
	*this = obj;
}

Ice::~Ice(void)
{
	std::cout << "Ice inhereted class destructor called";
}

AMateria	*Ice::clone(void) const
{
	return (new Ice);
}

std::string&	Ice::setTo_lower(std::string& ref_str)
{
	for (uint8_t i = 0; i < ref_str.size(); i++)
		ref_str[i] = (char)std::toupper(ref_str[i]);
	return (ref_str);
}

Ice&	Ice::operator = (const Ice& obj)
{
	this->setType(obj.getType());
	return (*this);
}
