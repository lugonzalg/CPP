/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:33:57 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/03 20:25:20 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("RobotomyRequestForm", 72, 45), _target(target) {
	//std::cout << "Default constructor for RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	//std::cout << "Default destructor for RobotomyRequestForm" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const& bure) {
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
