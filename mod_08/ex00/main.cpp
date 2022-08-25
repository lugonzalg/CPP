#include <iostream>

#include "easyfind.hpp"


int main() {

	std::set	<int>mySet;
	std::list	<int>myList;
	std::deque	<int>myDeque;

	callFill(mySet);
	callFill(myList);
	callFill(myDeque);

	callFind(mySet, 10);
	callFind(myList, 10);
	callFind(myDeque, 10);
	
	callFind(mySet, 12);
	callFind(myList, 12);
	callFind(myDeque, 12);
	return 0;
}
