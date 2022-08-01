#include "Bureaucrat.hpp"
#include <iostream>

#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

static Bureaucrat	*newBureaucrat(std::string const& name, int level) {
	Bureaucrat	*newBure;

	newBure= NULL;
	try
	{
		newBure = new Bureaucrat(level, name);
		std::cout << *newBure;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "Bureaucrat constructor: ";
		std::cout << e << std::endl << END;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "Bureaucrat constructor: ";
		std::cout << e << std::endl << END;
	}
	return newBure;
}

int main() {
	Bureaucrat	*tmp;

	tmp = newBureaucrat("paco", 11);
	if (tmp)
		delete tmp;

	tmp = newBureaucrat("jimmy", 0);
	tmp = newBureaucrat("keanu", 1211);

	tmp = newBureaucrat("paco", 11);
	Bureaucrat	paCopy(*tmp);
	delete tmp;

	std::cout << "\n\nTEST COPY: " << std::endl;
	Bureaucrat newTmp;
	std::cout << newTmp;
	newTmp = paCopy;
	std::cout << newTmp;
	return 0;
}
