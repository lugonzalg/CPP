/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:25:36 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 20:25:23 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("PresidentialPardonForm", 25, 5), _target(target) {
	//std::cout << "Default constructor for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	//std::cout << "Default destructor for PresidentialPardonForm" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const& bure) {
	try
	{
		if (!this->_status)
			Form::FormStateFalse();
		else if (this->getGradeExec() < bure.getLevel())
			Form::GradeTooLowException()

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
