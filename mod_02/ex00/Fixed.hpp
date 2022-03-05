/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 01:34:44 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/19 17:19:08 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Fixed
{
	public:
		Fixed ( void );
		Fixed ( Fixed &ref );
		~Fixed ( void );
		int		getRawBits ( void ) const;
		void	setRawBits ( const int raw );
		void	operator = ( Fixed &ref);

	private:
		int					_fixed_point_value;
		static const int	_fraction_bits;
};