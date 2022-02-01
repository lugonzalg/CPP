#include <iostream>
#include <vector>

class Test {

	public:
		typedef Test	t;

		Test( int init_dep );
		~Test( void );
}	;

Test::Test(int init_dep)
{
	init_dep = 1;
}

Test::~Test( void )
{
	std::cout << "qweerty";
}

int main( void )
{
	typedef std::vector<Test::t>	test_t;

	const int qwer[] = {1, 2, 3, 4, 5, 6, 7};
	const size_t	size = sizeof(qwer) / sizeof(int);
	test_t			test_1(qwer, qwer + size);
	return (0);
}
