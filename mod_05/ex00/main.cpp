#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	Bureaucrat	lukas;
	std::cout << lukas << std::endl;
	Bureaucrat	paco(11, "paco");
	std::cout << paco << std::endl;
	Bureaucrat	jimmy(151, "paco");
	std::cout << jimmy << std::endl;
	Bureaucrat	keanu(0, "paco");
	std::cout << keanu << std::endl;
	Bureaucrat	paCopy(paco);
	std::cout << paCopy << std::endl;

	lukas = paCopy;
	std::cout << lukas << std::endl;
	return 0;
}
