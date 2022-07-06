/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 21:30:30 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/06 21:34:31 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Intern.hpp"

/**************************/
/*CONSTRUCTOR & DESTRUCTOR*/
/**************************/

Intern::Intern() {
	this->formList[0].name = "robotomy request";
	this->formList[0].ptr = &Intern::create_robotomy;
	this->formList[1].name = "shrubbery request";
	this->formList[1].ptr = &Intern::create_shrubbery;
	this->formList[2].name = "presidential request";
	this->formList[2].ptr = &Intern::create_presidential;
}

Intern::~Intern() {
	//std::cout << "Default Intern destructor" << std::endl;
}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

Form	*Intern::makeForm(std::string const& form, std::string const& name) {
	try {
		for (int i = 0; i < 3; i++) {
			if (form == this->formList[i].name)
				return (this->*formList[i].ptr)(name);
		}
		throw Intern::NotFormMatch();
	}
	catch (Intern::NotFormMatch& e) {
		std::cout << e << form;
		return NULL;
	}
}

Form	*Intern::create_shrubbery(std::string const& name) {
	std::cout << "Inter succesfully create ShrubberyCreationForm" << std::endl;
	return new ShrubberyCreationForm(name);
}

Form	*Intern::create_robotomy(std::string const& name) {
	std::cout << "Inter succesfully create RobotomyRequestForm" << std::endl;
	return new RobotomyRequestForm(name);
}

Form	*Intern::create_presidential(std::string const& name) {
	std::cout << "Inter succesfully create PresidentialPardonForm" << std::endl;
	return new PresidentialPardonForm(name);
}

/***********/
/*EXCEPTIOS*/
/***********/

const char	*Intern::NotFormMatch::what() const throw() {
	return "Non existant Form -> ";
}

/*********/
/*OSTREAM*/
/*********/

std::ostream&	operator<< (std::ostream& os, Intern::NotFormMatch const& src) {
	os << src.what();
	return os;
}
