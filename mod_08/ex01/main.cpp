#include "span.hpp"
#include <iostream>

int main()
{
	int	sz = 100000;
	Span sp = Span(sz);

	for (int i = 0; i < sz; i++)
		sp.addNumber(i);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span spp = Span(5);
	spp.addNumber(5);
	spp.addNumber(3);
	spp.addNumber(17);
	spp.addNumber(9);
	spp.addNumber(11);
	std::cout << spp.shortestSpan() << std::endl;
	std::cout << spp.longestSpan() << std::endl;
}
