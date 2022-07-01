#include "Bureaucrat.hpp"

/*void	Bureaucrat::init() {
	Bureaucrat::GradeTooHighException	this.TooHigh;
	Bureaucrat::GradeTooLowException	this.TooLow;
}*/

Bureaucrat::Bureaucrat() : _name("lukas"), _level(0) {}

Bureaucrat::Bureaucrat(int level, std::string const& name) : _name(name), _level(level) {
	if (level < 0)
		throw Bureaucrat::GradeTooHighException();
	else if (_level > 150)
		throw Bureaucrat::GradeTooLowException();
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
	return ("Fumo porros");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Ya no Fumo porros");
}

std::string const&	Bureaucrat::getName() const { return (this->_name); }
int	Bureaucrat::getLevel() const { return (this->_level); }
