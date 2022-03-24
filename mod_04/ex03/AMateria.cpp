/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:52:39 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:13 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>

AMateria::AMateria(void)
{
	std::cout << "AMateroa Base class Void contructor called";
}

AMateria::AMateria(std::string const& str_ref)
{
	std::cout << "AMateroa Base class String contructor called";
	this->setType(str_ref);
}

AMateria::AMateria(AMateria const& obj)
{
	std::cout << "AMateroa Base class Copy contructor called";
	*this = obj;
}
void	AMateria::setType(std::string const& str_ref)
{
	this->_type = str_ref;
}

std::string const&	AMateria::getType(void) const
{
	return (this->_type);
}
