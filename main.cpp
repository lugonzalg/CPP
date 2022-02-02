/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 00:26:24 by lugonzal          #+#    #+#             */
/*   Updated: 2022/01/23 01:47:35 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phone_book.hpp"
#include <unistd.h>

static void	ft_add_info_to_book(void)
{
	short int	i;
	std::string str[5];
	std::string prompt[5] = {"first name", "last name", "nickname" , "phone number", "nothing suspicious"};

	i =-1;
	while (++i < 5)
	{
		std::cout << prompt[i] << ": ";
		std::cin >> str[i];
	}
	std::cout << "person added to the list" << std::endl;
	sleep(2);
}

int	main(void)
{
	//c_book	list[8];
	c_book	list;
	std::string	in_state;
	std::string	cases[3] = {"ADD", "REMOVE", "SEARCH"};
	short int	i;

	std::cout << "Welcome to the new brand phone book" << std::endl;
	while (1)
	{
		std::cout << "Please select between: ADD, REMOVE and SEARCH mode" << std::endl;
		std::cout << "> ";
		std::cin >> in_state;
		i = -1;
		while (++i < 3)
		{
			if (!in_state.compare(cases[i]))
			{
				ft_add_info_to_book();
				break ;
			}
		}
		if (i == 3)
		{
			std::cout << in_state << " wrong value" << std::endl;
			sleep(1);
		}
	}
	return (0);
}
