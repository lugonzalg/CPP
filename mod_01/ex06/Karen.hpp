/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:37:57 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/13 01:19:58 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	KAREN_HPP
#define KAREN_HPP

#include <iostream>

class	Karen
{
	public:
		Karen ( void );
		void	ft_complain ( std::string level );
		void	ft_complain_cases ( std::string level );
	private:
		std::string	_level[4];
		void		_debug( void );
		void		_info( void );
		void		_warning( void );
		void		_error( void );
};

#endif
