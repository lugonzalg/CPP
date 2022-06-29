#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <iostream>

AMateria::AMateria() {
	this->_type = "";
	//std::cout << "Default AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const& type) {
	this->_type = type;
	//std::cout << "String AMateria constructor" << std::endl;
}

AMateria::~AMateria() { //std::cout << "Default AMateria destructor" << std::endl;
}

void	AMateria::use(ICharacter& target) { //std::cout << target.getName() << " got AMateriated" << std::endl;
	(void)target;
}

std::string const&	AMateria::getType() const { return (this->_type); }
