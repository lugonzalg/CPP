#include "Data.hpp"

/*************/
/*CONSTRUCTOR*/
/*************/

Data::Data() : _name("lukas"), _age(42), _accuracy(42.42f) {}

Data::Data(Data const& src)  : _name(src.getName()) {
	*this = src;
}

Data::Data(std::string const& name, int age, float accuracy) : _name(name), _age(age), _accuracy(accuracy) {
}

/*************/
/*DESTRUCTOR*/
/*************/

Data::~Data() {}

/**********/
/*OPERATOR*/
/**********/

Data&	Data::operator= (Data const& src){
	this->_age = src.getAge();
	this->_accuracy = *src.getAccuracy();
	return *this;
}

/********/
/*GETTER*/
/********/

std::string	Data::getName() const { return this->_name; }
int	Data::getAge() const { return this->_age; }
const float	*Data::getAccuracy() const { return &this->_accuracy; }

