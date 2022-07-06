/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:25:36 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/06 21:18:07 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PresidentialPardonForm.hpp"

/**************************/
/*CONSTRUCTOR & DESTRUCTOR*/
/**************************/

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("PresidentialPardonForm", 25, 5) {
	this->_target = target;
	//std::cout << "Default constructor for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	//std::cout << "Default destructor for PresidentialPardonForm" << std::endl;
}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	PresidentialPardonForm::action() const { std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl; }
