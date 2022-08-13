#include <iostream>
#include <string.h>

#include "whatever.hpp"

int main(void) {
	int	aa = 2;
	int bb = 3;

	swap( aa, bb );
	std::cout << "aa = " << aa << ", bb = " << bb << std::endl;
	std::cout << "min( aa, bb ) = " << ::min( aa, bb ) << std::endl;
	std::cout << "max( aa, bb ) = " << ::max( aa, bb ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";

	int	cc = 2;
	int dd = 3;

	swap( cc, dd );
	std::cout << "cc = " << cc << ", dd = " << dd << std::endl;
	std::cout << "min( cc, dd ) = " << ::min( cc, dd ) << std::endl;
	std::cout << "max( cc, dd ) = " << ::max( cc, dd ) << std::endl;

	float	ee = 2.1f;
	float 	ff = 3.1f;

	swap( ee, ff );
	std::cout << "ee = " << ee << ", ff = " << ff << std::endl;
	std::cout << "min( ee, ff ) = " << ::min( ee, ff ) << std::endl;
	std::cout << "max( ee, ff ) = " << ::max( ee, ff ) << std::endl;


	std::string str = "chaine1";
	std::string rts = "chaine2";

	swap(str, rts);
	std::cout << "str = " << str << ", rts = " << rts << std::endl;
	std::cout << "min( str, rts ) = " << ::min( str, rts ) << std::endl;
	std::cout << "max( str, rts ) = " << ::max( str, rts ) << std::endl;
return 0; }
