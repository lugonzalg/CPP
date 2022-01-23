#include "phone_book.hpp"
#include "phone_info.hpp"
#include <iostream>

/*static void	ft_fill_book(Phone_Book *phone_book)
{
	short int	i;
	std::string 	in_str[5];
	std::string 	options[5] = {"First Name","Last Name","Nickname",
		"Phone Book","Nothing suspicious"};

	i = -1;
	while (++i < 5)
	{
		std::cout << options[i] << ": ";
		std::cin >> in_str[i];
	}
	phone_book->ft_set_values(in_str);
}*/

static void	ft_prompt(Phone_Info info)
{
	short int	i;
	//short int	list_num;
	std::string	in_str;

	std::cout << "Welcome to the new brand PhoneBook." << std::endl << "Please select ";
	std::cout << "between ADD, SEARCH and EXIT options, don't miss the uppercase letters";
	std::cout << std::endl;
	//list_num = 0;
	while (1)
	{
		std::cout << "Enter the option: [ADD, SEARCH, EXIT]" << std::endl << "> ";
		std::cin >> in_str;
		i = -1;
		while (++i < 3)
		{
			if (!in_str.compare(info.prompt_opt[i]))
			{
				//ft_fill_book(&phone_book[list_num++]);
				//if (list_num == 5)
				//	list_num = 0;
				break ;
			}
		}
		if (i == 3)
		{
			std::cout << "Your argument is wrong: " << in_str << std::endl;
			std::cout << "Please, repeat yout argument in uppercase." << std::endl;
		}

	}
}

int	main(void)
{
	Phone_Info	info("default");

	ft_prompt(info);
	return (0);
}
