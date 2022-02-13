/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:07:23 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/13 01:26:24 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::_debug ( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "DEBUG CUSTOM MSG" << std::endl;
}

void Karen::_info ( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "INFO CUSTOM MSG";
	std::cout << std::endl;
}

void Karen::_warning ( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "WARNING CUSTOM MSG";
	std::cout << std::endl;
}

void Karen::_error ( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "ERROR CUSTOM MSG";
	std::cout << std::endl;
}

Karen::Karen ( void )
{
	_level[0] = "DEBUG";
	_level[1] = "INFO";
	_level[2] = "WARNING";
	_level[3] = "ERROR";
}

void	Karen::ft_complain_cases ( std::string level )
{
	size_t	i;

	i = 0;
	while (i < 4 && level != _level[i])
		i++;
	switch( i )
	{
		case (0):
			this->_debug();
		case (1):
			this->_info();
		case (2):
			this->_warning();
		case (3):
			this->_error();
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";

	}
}
