#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("lukas"), _level(0) {}

Bureaucrat::Bureaucrat(int level, std::string const& name) : _name(name), _level(level) {
	try
	{
		if (level < 0)
			throw Bureaucrat::GradeTooHighException();
		else if (_level > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << e << std::endl;
		std::cout << *this;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << e << std::endl;
		std::cout << *this;
	}
}

Bureaucrat::~Bureaucrat() {}

void	Bureaucrat::addLevel() {
	this->_level++;
	if (_level > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrLevel() {
	this->_level--;
	if (_level < 0)
		throw Bureaucrat::GradeTooHighException();
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Level too high Exception");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Level too Low Exception");
}

std::string const&	Bureaucrat::getName() const { return (this->_name); }
int	Bureaucrat::getLevel() const { return (this->_level); }

std::ostream& operator<< (std::ostream& os, Bureaucrat::GradeTooHighException& e) {
	os << e.what();
	return os;
}

std::ostream& operator<< (std::ostream& os, Bureaucrat::GradeTooLowException& e) {
	os << e.what();
	return os;
}

std::ostream& operator<< (std::ostream& os, Bureaucrat& src) {
	os << src.getName() + " bureaucrat grade," + std::to_string(src.getLevel());
	return os;
}
