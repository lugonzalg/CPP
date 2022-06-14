/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:37:57 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/16 20:49:43 by lugonzal         ###   ########.fr       */
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
	private:
		typedef	void (Karen::* ft_ptr)( void );

		typedef struct	s_status
		{
			std::string	level;
			ft_ptr		ft_level;
		}	t_status;

		t_status	_status[5];
		void		_debug( void );
		void		_info( void );
		void		_warning( void );
		void		_error( void );
		void		_missed( void );
};

#endif
