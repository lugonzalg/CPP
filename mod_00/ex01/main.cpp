/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:32:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/01/24 21:39:56 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

static void	ft_prompt(PhoneBook info)
{
	short int	i;
	short int	list_num;
	std::string	in_str;

	std::cout << "Welcome to the new brand PhoneBook." << std::endl << "Please select ";
	std::cout << "between ADD, SEARCH and EXIT options, don't miss the uppercase letters";
	std::cout << std::endl;
	list_num = 0;
	while (1)
	{
		std::cout << "Enter the option: [ADD, SEARCH, EXIT]" << std::endl << "> ";
		std::cin >> in_str;
		i = -1;
		while (++i < 3)
		{
			if (!in_str.compare(info.prompt_opt[i]))
			{
				if (i == 0)
					info.ft_fill_book(list_num++);
				else if (i == 1)
					info.ft_seach_book(list_num++);
				else
					i = -1;
				if (list_num == 5)
					list_num = 0;
				break ;
			}
		}
		if (i == 3)
		{
			std::cout << "Your argument is wrong: " << in_str << std::endl;
			std::cout << "Please, repeat yout argument in uppercase." << std::endl;
		}
		else if (i == -1)
			break ;
	}
}

int	main(void)
{
	PhoneBook	info;

	ft_prompt(info);
	return (0);
}
