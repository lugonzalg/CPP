#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

/**************/
/*COONSTRUCTOR*/
/**************/

Character::Character() {
	this->init();
	std::cout << "Default Character constructor" << std::endl;
}

Character::Character(Character const& src) {
	std::cout << "Copy Character constructor" << std::endl;
	*this = src;
}

Character::Character(std::string const& name) : _name(name) {
	this->init();
	std::cout << "String Character constructor" << std::endl;
}

/************/
/*DESTRUCTOR*/
/************/

Character::~Character() {
	std::cout << "Default Character Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		{
			std::cout << "Character destructor " << i << " delete Materia" << std::endl;
			delete this->_inventory[i];
		}
	}
}

Character&	Character::operator= (Character const& src) {
	this->_emptyPos = src.getEmptyPos();
	for (int i = 0; i < 4; i++)
	{
		if (src.getMateria(i, "ice"))
			this->_inventory[i] = (AMateria *)new Ice;
		else if (src.getMateria(i, "cure"))
			this->_inventory[i] = (AMateria *)new Cure;
	}
	return (*this);
}

/*****************/
/*MEMBER FUNCTION*/
/*****************/

void	Character::equip(AMateria* m) {
	int i;
	std::string type = m->getType();

	if (this->_emptyPos > 3 or (type != "ice" and type != "cure"))
		return ;
	for (i = 0; i < 4 and this->_inventory[i]; i++) {}
	std::cout << "EQUIP SLOT: " << std::to_string(i) << std::endl;
	this->_inventory[i] = m;
	this->_emptyPos++;
}

void	Character::unequip(int pos)
{
	if (pos > 3 or pos < 0 or !this->_inventory[pos])
		return ;
	std::cout << "UNEQUIP SLOT: " << std::to_string(pos) << std::endl;
	this->_inventory[pos] = NULL;
	this->_emptyPos--;
}

void	Character::use(int pos, ICharacter& target)
{
	if (pos > 3 or !this->_inventory[pos])
		return ;
	if (this->_inventory[pos]->getType() == "ice" or this->_inventory[pos]->getType() == "cure")
		this->_inventory[pos]->use(target);
}

void	Character::init() {
	this->_emptyPos = 0;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

/*********/
/*GETTERS*/
/*********/

std::size_t		Character::getEmptyPos() const { return (this->_emptyPos); }

bool	Character::getMateria(int pos, std::string const& type) const { return (this->_inventory[pos] and this->_inventory[pos]->getType() == type); }

std::string const& Character::getName() const { return (this->_name); }
