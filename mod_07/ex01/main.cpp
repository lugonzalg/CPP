#include "iter.hpp"

#include <iostream>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; } int get( void ) const { return this->_n; } private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense? Awesome tab2[5];
	Awesome tab2[5];
	iter( tab, 5, print ); iter( tab2, 5, print );
return 0;
}

int paco() {
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
