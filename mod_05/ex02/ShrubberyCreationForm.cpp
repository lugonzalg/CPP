/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:32:59 by lugonzal          #+#    #+#             */
/*   Updated: 2022/07/31 21:26:20 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"

/*************/
/*CONSTRUCTOR*/
/*************/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {
	this->_target = "lukas";
	this->_initTree();
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) {
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
	this->_initTree();
}

/************/
/*DESTRUCTOR*/
/************/

ShrubberyCreationForm::~ShrubberyCreationForm() {
//	std::cout << "Default destructor for ShrubberyCreationForm" << std::endl;
}

/******************/
/*MEMBER FUNCTIONS*/
/******************/

void	ShrubberyCreationForm::action() const {

	std::ofstream	outFile(this->_target);

	for (int i = 0; i < 9; i++)
		outFile << this->_tree[i] + '\n';
}

void	ShrubberyCreationForm::_initTree() {
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

/**********/
/*OPERATOR*/
/**********/

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (ShrubberyCreationForm const& src) {
	this->_target = src._target;
	return *this;
}
