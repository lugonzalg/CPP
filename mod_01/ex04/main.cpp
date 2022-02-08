/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:31:25 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/08 21:21:22 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static void	ft_replace(char buff[1024], std::string str[2])
{
	size_t	i;
	size_t	j;
	size_t	s1_len;

	s1_len = str[0].length();
	i = -1;
	j = 0;
	(void)str;
	std::string test = (std::string )buff;
/*	while (buff[++i])
	{
		if (buff[i] == str[j])
			j++;
		else
			j = 0;
		if (j == s1_len)
			while (j--)
				buff[i + j] = str[j];
	}*/
}

int main( void )
{
	std::ifstream 	infile;
	std::ofstream 	outfile;
	std::string 	str[2];
	std::string 	file;
	char			buffer[1024];

	std::cout << "String 1: ";
	std::cin >> str[0];
	std::cout << "String 2: ";
	std::cin >> str[1];
	std::cout << "Filename: ";
	std::cin >> file;
	infile.open(file);
	file += ".replace";
	if (infile.fail())
		std::cout << "Wrong infile name";
	std::cout << file;
	outfile.open(file);
	if (outfile.fail())
		std::cout << "Wrong outfile name";
	while (1)
	{
		std::memset(buffer, 0, sizeof(buffer));
		infile.read(buffer, 1023);
		ft_replace(buffer, str);
	}
}
