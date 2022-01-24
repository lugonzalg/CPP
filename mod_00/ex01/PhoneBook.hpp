/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_info.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:32:14 by lugonzal          #+#    #+#             */
/*   Updated: 2022/01/24 21:39:57 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONE_INFO_H
#define PHONE_INFO_H

#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	Contact[5];
		std::string	options_phone[5];
		std::string options[5];
	public:
		std::string	prompt_opt[3];
		PhoneBook (void);
		void	ft_fill_book(int);
		void	ft_seach_book(PhoneBook);
};

#endif
