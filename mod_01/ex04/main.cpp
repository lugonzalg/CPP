/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:25 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/10 22:22:46 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

static void	ft_replace(char buff[1024], std::string str[2], std::ofstream *outfile)
{
	size_t		len_str1;
	size_t		len_str2;
	size_t		i;

	i = 0;
	len_str1 = str[0].size();
	len_str2 = str[1].size();
	while (buff[i])
	{
	   if (!std::strncmp(&buff[i], str[0].c_str(), len_str1))
	   {
			outfile->write(str[1].c_str(), len_str1);
			i += len_str2;
			continue ;
		}
		outfile->write(&buff[i], 1);
		i++;
	}
}

int main( void )
{
	t_replace re;

	std::cout << "String 1: ";
	std::cin >> re.str[0];
	std::cout << "String 2: ";
	std::cin >> re.str[1];
	std::cout << "Filename: ";
	std::cin >> re.file;
	re.infile.open(re.file);
	re.file += ".replace";
	if (re.infile.fail())
		std::cout << "Wrong infile name";
	std::cout << re.file;
	re.outfile.open(re.file);
	if (re.outfile.fail())
		std::cout << "Wrong outfile name";
	while (1)
	{
		std::memset(re.buffer, 0, sizeof(re.buffer));
		re.infile.read(re.buffer, 1023);
		if (!re.infile.gcount())
			break ;
		ft_replace(re.buffer, re.str, &re.outfile);
	}
}
