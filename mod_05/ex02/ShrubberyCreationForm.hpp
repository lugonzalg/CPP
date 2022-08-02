/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:32:54 by lugonzal          #+#    #+#             */
/*   Updated: 2022/08/02 18:41:27 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : virtual public Form
{
	private:

		std::string 		_tree[10];

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const&);
		ShrubberyCreationForm(ShrubberyCreationForm const&);
		~ShrubberyCreationForm();

		ShrubberyCreationForm&	operator= (ShrubberyCreationForm const&);

		void	action() const;
		void	_initTree();
};
