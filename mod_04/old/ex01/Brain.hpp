/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:41:35 by lugonzal          #+#    #+#             */
/*   Updated: 2022/03/23 22:59:31 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define	BRAIN_HPP

#include <iostream>

class	Brain
{
	private:
		std::string _ideas[100];
	protected:

	public:
		Brain		(void);
		Brain		(std::string);
		Brain		(const Brain&);
		~Brain		(void);
		Brain&	operator = (const Brain&);
		std::string	getIdeas(uint8_t) const;
		void		setIdeas(uint8_t, std::string);

};

#endif
