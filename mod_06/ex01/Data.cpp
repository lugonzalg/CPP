#include "Data.hpp"

Data::Data() : _name("lukas"), _age(123), _accuracy(42.42f) {}

Data::Data(Data const& src) {
			*this = src;
}

Data::~Data() {}

Data&	Data::operator= (Data const& src) {
	this->_name = src.getName();
	this->_age = src.getAge();
	this->_accuracy = src.getAccuracy();

	return *this;
}

std::string const&	Data::getName() const { return this->_name; }
int	Data::getAge() const { return this->_age; }
float	Data::getAccuracy() const { return this->_accuracy; }
