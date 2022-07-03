/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:32:54 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 20:25:17 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		void	action();
		std::ofstream	_outFile;

	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm(std::string const&);

		void	action(Form const&);
};
