/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:32:59 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 20:25:17 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
	//std::cout << "Default constructor for ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	//std::cout << "Default destructor for ShrubberyCreationForm" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& bure) {
	try
	{
		if (!this->_status)
			Form::FormStateFalse();
		else if (this->getGradeExec() < bure.getLevel())
			Form::GradeTooLowException()
		this->action();
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << e;
	}
	catch (Form::FormStateFalse& e)
	{
		std::cout << e;
	}
}

void	ShrubberyCreationForm::action(Form const& form) {

	this->_outFile.open((this->_target);
}
