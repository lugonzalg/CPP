/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:07:23 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/19 15:40:02 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::_debug ( void )
{
	std::cout << "DEBUG CUSTOM MSG" << std::endl;
}

void Karen::_info ( void )
{
	std::cout << "INFO CUSTOM MSG" << std::endl;
}

void Karen::_warning ( void )
{
	std::cout << "WARNING CUSTOM MSG" << std::endl;
}

void Karen::_error ( void )
{
	std::cout << "ERROR CUSTOM MSG" << std::endl;
}

void Karen::_missed ( void )
{
	std::cout << "Error: Wrong number of arguments." << std::endl;
}

Karen::Karen ( void )
{
	_status[0].level = "DEBUG";
	_status[0].ft_level = &Karen::_debug;
	_status[1].level = "INFO";
	_status[1].ft_level = &Karen::_info;
	_status[2].level = "WARNING";
	_status[2].ft_level = &Karen::_warning;
	_status[3].level = "ERROR";
	_status[3].ft_level = &Karen::_error;
	_status[4].level = "MISSED";
	_status[4].ft_level = &Karen::_missed;
}

void	Karen::ft_complain ( std::string level )
{
	size_t	i;
	Karen	*Karen = this;

	i = 0;
	while (i < 4 && level.compare(_status[i].level) != 0)
		i++;
	(Karen->*_status[i].ft_level)();
}
