#include "Cast.hpp"

#include <string>
#include <iostream>

int main(int ac, char *av[]) {
	if (ac != 2) {
		std::cout << "Error: Wrong number of parameters" << std::endl;
		return 1;
	}
	Cast	cast(av[1]);
	std::cout << "PARAMETER: " << av[1] << std::endl;
	std::cout << "CASTS: \n" << cast;
	return 0;
}
