#include <iostream>

int main() {
	int a = 1,b = 2;
	float c = 1.2f,b = 2.1f;

	std::cout << a << "--" << b << std::endl;
	swap<int>(&a, &b);
	std::cout << a << "--" << b << std::endl;

	std::cout << c << "--" << r << std::endl;
	swap<int>(&c, &r);
	std::cout << c << "--" << d << std::endl;
	return 0;
}
