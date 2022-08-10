#include "time.h"

#include <cstdlib>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static Base	*createA() { return new A; }

static Base	*createB() { return new B; }

static Base	*createC() { return new C; }

static Base	*generate() {
	f	ptr[3];
	int	base;

	srand(time(NULL));
	base = rand() % 3;
	std::cout << base << std::endl;

	ptr[0] = createA;
	ptr[1] = createB;
	ptr[2] = createC;

	return ptr[base]();
}

static void	identify(Base *ptr) {
	Base	*doSome;

	std::cout << "WITH POINTER" << std::endl;
	doSome = dynamic_cast<A*>(ptr);
	if (doSome) {
		std::cout << "A" << std::endl;
	}
	doSome = dynamic_cast<B*>(ptr);
	if (doSome) {
		std::cout << "B" << std::endl;
	}
	doSome = dynamic_cast<C*>(ptr);
	if (doSome) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& ptr) {
	Base	*doSome;

	std::cout << "WITH DEREFENCE" << std::endl;
	try
	{
		doSome = &dynamic_cast<A&>(ptr);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast const&) {
		std::cout << "Not A" << std::endl;
	}
	try
	{
		doSome = &dynamic_cast<B&>(ptr);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast const&) {
		std::cout << "Not B" << std::endl;
	}
	try
	{
		doSome = &dynamic_cast<C&>(ptr);
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast const&) {
		std::cout << "Not C" << std::endl;
	}
}

int main() {
	Base	*holder;

	holder = generate();
	identify(holder);
	identify(*holder);
	delete holder;
	return 0;
}
