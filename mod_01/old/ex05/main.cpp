/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:36:49 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/19 15:40:03 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main( void )
{
	Karen	status;

	std::string in_str;

	while (1)
	{
		std::cout << "Please select prompt level: ";
		std::cin >> in_str;	
		status.ft_complain( in_str );
	}
	return (0);
}
