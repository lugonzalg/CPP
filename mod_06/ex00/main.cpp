#include <iostream>
#include "Dict.hpp"


int main(int ac, char *av[]) {

	Dict	d;
	if (ac != 2) {
		std::cout << "Error: Wrong number of parameters" << std::endl;
		return 1;
	}
	d.init(av[1]);

	str = av[1];
	//std::cout << "INT: " << n << std::endl;;
	//std::cout << "FLOAT: " << f << std::endl;
	return 0;
}
