/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:03:50 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/02 20:21:43 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

//Intern::Intern() : _name("no name"{}

Intern::Intern(std::string& name, int sign, int exec) : _name(name), _state(false), _gradeSign(sign), _gradeExec(exec) {
	try
	{
		if (level < 0)
			throw Intern::GradeTooHighException();
		else if (_level > 150)
			throw Intern::GradeTooLowException();
	}
	catch (Inter::GradeTooLowException& e)
	{
		std::cout << e << std::endl;
		std::cout << *this;
	}
}

Intern::~Intern() {
}

std::string const&	getName() const { return this->_name; }
std::bool 			getState() const { this->_state; }
int	const			getGradeSign() const { return this->_gradeSign; }
int	const			getGradeExec() const { return this->_gradeExec; }
