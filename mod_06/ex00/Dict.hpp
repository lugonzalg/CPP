<<<<<<< HEAD
#ifndef	DICT_HPP
#define	DICT_HPP

#include <string>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dict.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:07:37 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/08 17:17:16 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_HPP
#define DICT_HPP

#nclude <string>
>>>>>>> 1b55cef30adabb031a81b8bcb270b788d1069afc

class Dict
{
	private:

<<<<<<< HEAD
		std::string	*_str;
		int			_n;
		float		_f;
=======
		std::string const&	_str;
		int					_n;
		float				_f;
		char				_c;
>>>>>>> 1b55cef30adabb031a81b8bcb270b788d1069afc

	public:

		Dict();
		~Dict();

		void	init();
};

#endif
