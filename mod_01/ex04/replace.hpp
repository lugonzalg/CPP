/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:18:31 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/10 22:22:47 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

typedef struct	s_replace
{
	std::ifstream 	infile;
	std::ofstream 	outfile;
	std::string 	str[2];
	std::string 	file;
	char			buffer[1024];

}	t_replace;

#endif
