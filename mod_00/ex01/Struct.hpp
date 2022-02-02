/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Struct.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:10:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/01/29 20:08:55 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
#define STRUCT_H

#include "PhoneBook.hpp"

typedef struct	s_data
{
	PhoneBook	info;
	short int	i;
	short int	list_num;
	std::string	in_str;
}	t_data;

#endif
