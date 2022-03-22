/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:36:49 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/13 01:32:56 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main( int argc, char *argv[] )
{
	Karen	status;
	std::string in_str;

	if (argc == 1)
	{
		std::cout << "Error: Wrong arguments";
		return (1);
	}
	in_str = argv[1];
	status.ft_complain_cases( in_str );
	return (0);
}
