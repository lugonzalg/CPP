/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:32:54 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/05 20:56:41 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:

		std::string 		_tree[10];

	public:
		ShrubberyCreationForm(std::string const&);
		~ShrubberyCreationForm();

		void	action() const;
};
