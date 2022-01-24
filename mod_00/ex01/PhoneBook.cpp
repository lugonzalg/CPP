/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:20:46 by lugonzal          #+#    #+#             */
/*   Updated: 2022/01/24 21:39:57 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

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

void	PhoneBook::ft_fill_book(int n)
{
	short int	i;

	i = -1;
	while (++i < 5)
	{
		std::cout << this->options[i];
		std::cin >> this->Contact[n].info[i];
	}
}

void	PhoneBook::ft_seach_book(PhoneBook Book)
{
	int	i;

	i = -1;

	while (++i < 5)
	{
		std::cout << Book.Contact[i].info[0];
		std::cout << Book.Contact[i].info[1];
		std::cout << Book.Contact[i].info[2];
		std::cout << Book.Contact[i].info[3];
		std::cout << Book.Contact[i].info[4];
	}
}
