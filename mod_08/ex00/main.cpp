#include <set>
#include <iostream>

#include "easyfind.hpp"

int main() {
	std::set	<int>myList;

	try
	{
		::easyfind(myList, 10);
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
	return 0;
}
