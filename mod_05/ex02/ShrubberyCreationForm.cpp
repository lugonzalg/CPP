/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:32:59 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/05 21:20:28 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"

/***************************/
/*CONSTRUCTOR & DESTRUCTOR*/
/***************************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("ShrubberyCreationForm", 145, 137) {
	//std::cout << "Default constructor for ShrubberyCreationForm" << std::endl;
	this->_target = target;
	this->_tree[0] = "      _-_";
	this->_tree[1] = "   /~~   ~~\\";
	this->_tree[2] = "  /~~       ~~\\";
	this->_tree[3] = " {             }";
	this->_tree[4] = "  \\  _-  -_  /";
	this->_tree[5] = " ~  \\ //  ~";
	this->_tree[6] = "_- -   | | _- _";
	this->_tree[7] = "  _ -  | |   -_";
	this->_tree[8] = "      // \\";
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Default destructor for ShrubberyCreationForm" << std::endl;
}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	ShrubberyCreationForm::action() const {

	std::ofstream	outFile(this->_target);

	for (int i = 0; i < 9; i++)
		outFile << this->_tree[i] + '\n';

}
