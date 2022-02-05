/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:01:12 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/03 21:26:47 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string ft_get_info( int i )
{
	return (this->info[i]);
}

std::string ft_set_info( int i , std::string str)
{
	Contact::info[i] = str;
}

Contact::Contact( void )
{
	size_t	i;

	i = -1;
	while (++i < 5)
		info[i] = "default";
}
