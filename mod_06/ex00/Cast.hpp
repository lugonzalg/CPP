/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 17:08:43 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/16 18:11:30 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
#define CAST_HPP

#include <string>
#include <ostream>

class Cast
{
	private:

		std::string			_str;
		const char*			_c_str;
		int					_n;
		float				_f;
		double				_d;
		char				_c;

		bool				_hasF;
		bool				_hasDigit;
		bool				_hasAlpha;
		std::size_t			_len;

		void	_detect();
		void	_isFloat();
		void	_isDouble();
		void	_isInt();
		void	_isChar();

	public:

		Cast();
		Cast(const char*);
		Cast(Cast const&);
		~Cast();

		Cast&	operator= (Cast const&);

		void	setSTR(const char*);

		float	getFloat() const;
		double	getDouble() const;
		int		getInt() const;
		char	getChar() const;
		bool	getFlags() const;

		/*
	class EmptySTR : public std::exception
	{
		const char *what() const throw();
	};*/
};

std::ostream&	operator<< (std::ostream&, Cast const&);

#endif
