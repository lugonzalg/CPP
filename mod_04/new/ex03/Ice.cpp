#include "Ice.hpp"
#include "ICharacter.hpp"

#include <iostream>

Ice::Ice() {
	this->_type = "ice";
	//std::cout << "Default Ice constructor" << std::endl;
}

Ice::Ice(std::string const& type) {
	std::size_t	len;
	char	*str;

	str = (char *)type.c_str();
	len = type.size();
	for (std::size_t i = 0; i < len; i++)
		str[i] = tolower(str[i]);
	this->_type = type;
	//std::cout << "String Ice constructor" << std::endl;
}

Ice::Ice(Ice const& src) {
	//std::cout << "Copy Ice constructor" << std::endl;
	*this = src;
}

Ice::~Ice() {
	//std::cout << "Default Ice destructor" << std::endl;
}

Ice&	Ice::operator= (Ice const& src) {
	this->_type = src._type;
	return (*this);
}

Ice*	Ice::clone() const { return (new Ice()); }

void	Ice::use(ICharacter& target) {
	std::cout << "shoots an ice bolt to at " << target.getName() << std::endl;
}
