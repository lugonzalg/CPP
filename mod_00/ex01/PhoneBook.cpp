/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:20:46 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/03 21:24:16 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>  

PhoneBook::PhoneBook(void)
{
	prompt_opt[0] = "ADD\0";
	prompt_opt[1] = "SEARCH\0";
	prompt_opt[2] = "EXIT\0";
	options[0] = "First Name: ";
	options[1] = "Last Name: ";
	options[2] = "Nickname: ";
	options[3] = "Phone Number: ";
	options[4] = "Nothing suspicious: ";
}

void	PhoneBook::ft_fill_book(short int n)
{
	short int	i;
	std::string	str;
	i = -1;
	while (++i < 5)
	{
		std::cout << this->options[i];
		std::cin >> str;
		this->Contact[n].ft_set_info(i, str);
	}
}

void	PhoneBook::ft_book_query(PhoneBook Book)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < 8)
	{
		if (!Book.Contact[i].ft_get_info(0).length())
			break ;
		j = -1;
		std::cout << std::setw(10) << std::right;
		std::cout << i + 1;
		std::cout << "|";
		while (++j < 5)
		{
			std::cout << std::setw(10) << std::right;
			if (Book.Contact[i].ft_get_info(j).length() > 10)
			{
				Book.Contact[i].ft_get_info(j).resize(9);
				Book.Contact[i].ft_get_info(j).append(".");
			}
			std::cout << Book.Contact[i].ft_get_info(j);
			std::cout << "|";
		}
		std::cout << std::endl;
	}
}
