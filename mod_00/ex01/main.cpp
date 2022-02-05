/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:32:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/03 20:33:29 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "Struct.hpp"
#include <iostream>

static int	ft_option_query(t_data *d)
{
	if (!d->in_str.compare(d->info.prompt_opt[d->i]))
	{
		if (d->i == 0)
			d->info.ft_fill_book(d->list_num++);
		else if (d->i == 1)
			d->info.ft_book_query(d->info);
		else
			d->i = -1;
		if (d->list_num == 8)
			d->list_num = 0;
		return (1);
	}
	return (0);
}

static void	ft_prompt(t_data data)
{
	std::cout << "Welcome to the new brand PhoneBook." << std::endl << "Please select ";
	std::cout << "between ADD, SEARCH and EXIT options, don't miss the uppercase letters";
	std::cout << std::endl;
	data.list_num = 0;
	while (1)
	{
		std::cout << "Enter the option: [ADD, SEARCH, EXIT]" << std::endl << "> ";
		std::cin >> data.in_str;
		data.i = -1;
		while (++data.i < 3)
		{
			if (ft_option_query(&data))
				break ;
		}
		if (data.i == 3)
		{
			std::cout << "Your argument is wrong: " << data.in_str << std::endl;
			std::cout << "Please, repeat yout argument in uppercase." << std::endl;
		}
		else if (data.i == -1)
			break ;
	}
}

int	main(void)
{
	PhoneBook	info;
	t_data		data;

	data.info = info;
	data.list_num = 0;
	ft_prompt(data);
	return (0);
}
