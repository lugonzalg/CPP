#include "iter.hpp"

#include <iostream>

int main() {
	int	iArr[10];
	float	fArr[10];
	std::string	strArr[10];

	int	sz = 10;

	::iter(iArr, sz, ::trans);
	for (int i = 0; i < sz; i++)
		std::cout << iArr[i] << std::endl;

	::iter(fArr, sz, ::trans);
	for (int i = 0; i < sz; i++)
		std::cout << fArr[i] << std::endl;

	::iter(strArr, sz, ::trans);
	for (int i = 0; i < sz; i++)
		std::cout << strArr[i] << std::endl;
	return 0;
}
