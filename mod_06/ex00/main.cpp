<<<<<<< HEAD
=======
#include "Cast.hpp"

#include <string>
>>>>>>> 1b55cef30adabb031a81b8bcb270b788d1069afc
#include <iostream>
#include "Dict.hpp"


int main(int ac, char *av[]) {

	Dict	d;
	if (ac != 2) {
		std::cout << "Error: Wrong number of parameters" << std::endl;
		return 1;
	}
<<<<<<< HEAD
	d.init(av[1]);

	str = av[1];
	//std::cout << "INT: " << n << std::endl;;
	//std::cout << "FLOAT: " << f << std::endl;
=======
	Cast	cast(av[1]);
	std::cout << "PARAMETER: " << av[1] << std::endl;
	std::cout << "CASTS: \n" << cast;
>>>>>>> 1b55cef30adabb031a81b8bcb270b788d1069afc
	return 0;
}
