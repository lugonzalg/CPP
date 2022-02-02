/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:27:07 by lugonzal          #+#    #+#             */
/*   Updated: 2022/01/23 01:47:34 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

class c_book
{
	std::string info[5];
	//std::string first_name;
	//std::string last_name;
	//std::string nick_ame;
	//std::string phone_number;
	//std::string darkest_secret;
	public:
		//c_book ();
		void	ft_fill_book(std::string [5]);
	//c_boook::~c_book();
};

/*c_book::c_book ()
{
	int	i;

	i = -1;
	while (++i < 5)
		info[i] = NULL;
}*/
#endif
