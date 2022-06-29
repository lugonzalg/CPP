#include "Cure.hpp"
#include "ICharacter.hpp"

#include <iostream>

Cure::Cure() {
	this->_type = "cure";
	//std::cout << "Default Cure constructor" << std::endl;
}

Cure::Cure(std::string const& type) {
	std::size_t	len;
	char	*str;

	str = (char *)type.c_str();
	len = type.size();
	for (std::size_t i = 0; i < len; i++)
		str[i] = tolower(str[i]);
	this->_type = type;
	//std::cout << "String Cure constructor" << std::endl;
}

Cure::Cure(Cure const& src) {
	//std::cout << "Copy Cure constructor" << std::endl;
	*this = src;
}

Cure::~Cure() {
	//std::cout << "Default Cure destructor" << std::endl;
}

Cure&	Cure::operator= (Cure const& src) {
	this->_type = src._type;
	return (*this);
}

Cure*	Cure::clone() const { return (new Cure); }

void	Cure::use(ICharacter& target) {
	std::cout << "heals " << target.getName() << "'s wounds" << std::endl;
}
