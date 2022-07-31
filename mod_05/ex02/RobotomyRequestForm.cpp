/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:33:57 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/31 21:26:23 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include <cstdlib>

#include "RobotomyRequestForm.hpp"

/****************************/
/*CONSTRUCTORi & DESTRUCTOR*/
/****************************/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45) {
	this->_target = "Lukas";
	srand(time(NULL));
	//std::cout << "Default constructor for RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) {
	*this = src;
	srand(time(NULL));
	//std::cout << "Default constructor for RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("RobotomyRequestForm", 72, 45) {
	this->_target = target;
	srand(time(NULL));
	//std::cout << "Default constructor for RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	//std::cout << "Default destructor for RobotomyRequestForm" << std::endl;
}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	RobotomyRequestForm::action() const {
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " missed robotomization!!!" << std::endl;
}

/**********/
/*OPERATOR*/
/**********/

RobotomyRequestForm&	RobotomyRequestForm::operator= (RobotomyRequestForm const& src) {
	this->_target = src._target;
	return *this;
}
