/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:25:36 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/20 17:21:11 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

/**************************/
/*CONSTRUCTOR*/
/**************************/

PresidentialPardonForm::PresidentialPardonForm() : Form("LukasForm", -1, -1) {
	this->_target = _target;
	//std::cout << "Default constructor for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) {
	*this = src;
	//std::cout << "Default constructor for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("PresidentialPardonForm", 25, 5) {
	this->_target = target;
	//std::cout << "Default constructor for PresidentialPardonForm" << std::endl;
}

/*************/
/*CONSTRUCTOR*/
/*************/

PresidentialPardonForm::~PresidentialPardonForm() {
	//std::cout << "Default destructor for PresidentialPardonForm" << std::endl;
}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	PresidentialPardonForm::action() const { std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl; }

/**********/
/*OPERATOR*/
/**********/

PresidentialPardonForm&	PresidentialPardonForm::operator= (PresidentialPardonForm const& src) {
	this->_target = src._target;
	return *this;
}
