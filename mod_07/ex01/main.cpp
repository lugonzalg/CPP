#include "iter.hpp"

#include <iostream>

int main() {
	std::cout << "MY TEST" << std::endl;
	int	iArr[10];
	float	fArr[10];
	std::string	strArr[10];

	int	sz = 10;

	std::cout << "TEST 1" << std::endl;
	iter(iArr, sz, trans);
	for (int i = 0; i < sz; i++)
		std::cout << iArr[i] << std::endl;

	std::cout << "TEST 2" << std::endl;
	iter(fArr, sz, trans);
	for (int i = 0; i < sz; i++)
		std::cout << fArr[i] << std::endl;

	std::cout << "TEST 3" << std::endl;
	iter(strArr, sz, trans);
	for (int i = 0; i < sz; i++)
		std::cout << strArr[i] << std::endl;
	return 0;
}
