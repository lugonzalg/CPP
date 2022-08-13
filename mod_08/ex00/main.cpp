#include <iostream>

#include "easyfind.hpp"


int main() {

	std::set	<int>mySet;
	std::list	<int>myList;
	std::deque	<int>myDeque;
	std::stack	<int>myStack;

	callFill(mySet);
	callFill(myList);
	callFill(myDeque);
	callFill(myStack);

	callFind(mySet, 10);
	callFind(myList, 10);
	callFind(myDeque, 10);
	callFind(myStack, 10);
	
	callFind(mySet, 12);
	callFind(myList, 12);
	callFind(myDeque, 12);
	callFind(myStack, 12);
	return 0;
}
