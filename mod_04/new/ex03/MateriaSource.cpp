#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

/*************/
/*CONSTRUCTOR*/
/*************/

MateriaSource::MateriaSource() {
	this->init();
	std::cout << "Default MateriaSource constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& src) {
	std::cout << "Copy MateriaSource constructor" << std::endl;
	*this = src;
}

/************/
/*DESTRUCTOR*/
/************/

MateriaSource::~MateriaSource() {
	std::cout << "++Default MateriaSource destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			//std::cout << "MateriaSource destructor " << i << " delete Materia" << std::endl;
			delete this->_inventory[i];
		}
	}
}

/**********/
/*OVERLAOD*/
/**********/

MateriaSource&	MateriaSource::operator= (MateriaSource const& src) {
	this->_emptyPos = src._emptyPos;
	for (int i = 0; i < 4; i++)
	{
		if (src.getMateria(i, "ice"))
			this->_inventory[i] = new Ice();
		else if (src.getMateria(i, "cure"))
			this->_inventory[i] = new Cure();
	}
	return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

AMateria*	MateriaSource::createMateria(std::string const& type) {
	if (type == "ice")
		return new Ice;
	else if (type == "cure")
		return new Cure;
	return (AMateria *)NULL;
}

void	MateriaSource::learnMateria(AMateria *src) {
	int i;
	std::string type = src->getType();

	if (this->_emptyPos > 3 or (type != "ice" and type != "cure"))
		return ;
	for (i = 0; i < 4 and this->_inventory[i]; i++) {}
	//if (i > 3) return;
	std::cout << "learnMateria: " << src->getType() << std::endl;
	//if ((src->getType() == "ice" or src->getType() == "cure") and !this->_inventory[i])
	this->_inventory[i] = src;
	this->_emptyPos++;
}

bool	MateriaSource::getMateria(int pos, std::string const& type) const {
	return (this->_inventory[pos] and this->_inventory[pos]->getType() == type);
}

void	MateriaSource::init() {
	this->_emptyPos = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

