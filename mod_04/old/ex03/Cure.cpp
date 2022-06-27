/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:56:17 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:11 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure inhereted class Void constructori called";
}

Cure::Cure(std::string type) : AMateria(this->setTo_lower(type))
{
	std::cout << "Cure inhereted class String constructor called";
}

Cure::Cure(const Cure& obj)
{
	*this = obj;
}

Cure::~Cure(void)
{
	std::cout << "Cure inhereted class destructor called";
}

AMateria	*Cure::clone(void) const
{
	return (new Cure);
}

std::string&	Cure::setTo_lower(std::string& ref_str)
{
	for (uint8_t i = 0; i < ref_str.size(); i++)
		ref_str[i] = (char)std::toupper(ref_str[i]);
	return (ref_str);
}

Cure&	Cure::operator = (const Cure& obj)
{
	this->setType(obj.getType());
	return (*this);
}
