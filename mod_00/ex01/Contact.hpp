/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:12:28 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/03 21:27:54 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CPP
#define PHONE_BOOK_CPP

#include <string>

class	Contact
{
	public:
		static std::string ft_get_info( int );
		static std::string ft_set_info( int , std::string);
	private:
		static std::string info[5];
};

#endif
