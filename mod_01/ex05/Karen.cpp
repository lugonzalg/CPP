/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:07:23 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/13 00:36:55 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::_debug ( void )
{
	std::cout << "DEBUG CUSTOM MSG";
}

void Karen::_info ( void )
{
	std::cout << "INFO CUSTOM MSG";
}

void Karen::_warning ( void )
{
	std::cout << "WARNING CUSTOM MSG";
}

void Karen::_error ( void )
{
	std::cout << "ERROR CUSTOM MSG";
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
}

void	Karen::ft_complain ( std::string level )
{
	size_t	i;
	Karen	*Karen = this;

	i = 0;
	while (level != _status[i].level)
		i++;
	//(Karen.*_status[i].ft_level)(); //<- It Works
	(Karen().*_status[i].ft_level)(); //<- It Works
}
