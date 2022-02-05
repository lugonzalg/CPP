/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:41:50 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/05 17:37:10 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string &str_ref = str;
	std::string *str_ptr;

	str_ptr = &str;
	std::cout << "Address string: " << &str << std::endl;
	std::cout << "Address though pointer: " << str_ptr << std::endl;
	std::cout << "Address though reference: "<< &str_ref << std::endl;
	std::cout << "Content though pointer: " << *str_ptr << std::endl;
	std::cout << "Content though reference: "<< str_ref;
	return (0);
}
