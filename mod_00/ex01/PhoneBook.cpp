/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:20:46 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/01 19:30:36 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>  

PhoneBook::PhoneBook(void)
{
	prompt_opt[0] = "ADD";
	prompt_opt[1] = "SEARCH";
	prompt_opt[2] = "EXIT";
	options[0] = "First Name: ";
	options[1] = "Last Name: ";
	options[2] = "Nickname: ";
	options[3] = "Phone Book: ";
	options[4] = "Nothing suspicious: ";
}

void	PhoneBook::ft_fill_book(short int n)
{
	short int	i;

	i = -1;
	while (++i < 5)
	{
		std::cout << this->options[i];
		std::cin >> this->Contact[n].info[i];
	}
}

void	PhoneBook::ft_book_query(PhoneBook Book)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < 5)
	{
		if (!Book.Contact[i].info[0].length())
			break ;
		j = -1;
		std::cout << std::setw(10) << std::right;
		std::cout << i + 1;
		std::cout << "|";
		while (++j < 4)
		{
			std::cout << std::setw(10) << std::right;
			if (Book.Contact[i].info[j].length() > 10)
			{
				Book.Contact[i].info[j].resize(9);
				Book.Contact[i].info[j].append(".");
			}
			std::cout << Book.Contact[i].info[j];
			std::cout << "|";
		}
		std::cout << std::endl;
	}
}
