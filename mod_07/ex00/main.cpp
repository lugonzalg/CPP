#include <iostream>
#include <string.h>

#include "whatever.hpp"


int main() {
	/*
	int a = 1,b = 2;
	float c = 1.2f,d = 2.1f;
	std::string str, rts;

	str = "qwer";
	rts = "rewq";
	std::cout << a << "--" << b << std::endl;
	swap<int>(&a, &b);
	std::cout << a << "--" << b << std::endl;

	std::cout << c << "--" << d << std::endl;
	swap<float>(&c, &d);
	std::cout << c << "--" << d << std::endl;

	std::cout << str << "--" << rts << std::endl;
	swap<std::string>(&str, &rts);
	std::cout << str << "--" << rts << std::endl;

	std::cout << min<int>(a, b) << std::endl;
	std::cout << min<int>(a, 1) << std::endl;
	std::cout << min<float>(c, d) << std::endl;
	std::cout << min<float>(c, 1.2f) << std::endl;

	std::cout << max<int>(a, b) << std::endl;
	std::cout << max<int>(a, 1) << std::endl;
	std::cout << max<float>(c, d) << std::endl;
	std::cout << max<float>(c, 1.2f) << std::endl;
	*/
	int a = 2;
	int b = 3;
	::swap( &a, &b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(&c, &d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
