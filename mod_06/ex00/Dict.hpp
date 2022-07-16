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

class Dict
{
	private:

		std::string const&	_str;
		int					_n;
		float				_f;
		char				_c;

	public:

		Dict();
		~Dict();

		void	init();
};

#endif
