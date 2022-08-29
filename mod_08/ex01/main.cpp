#include "span.hpp"
#include <iostream>

int main()
{
	int	sz = 10000;
	std::vector	<int>v;
	Span sp = Span(sz);
	int	i;

	for (i = 0; i < sz; i++)
		sp.addNumber(i);
	try
	{
		for (i = 5; i < sz; i++)
			v.push_back(i);
		sp.addNumberSort(v);
	}
	catch (Span::FullContainer& e) {
		std::cout << e.what();
	}
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
	try {
		spp.addNumber(11);
	}
	catch (Span::FullContainer& e) {
		std::cout << e.what();
	}
}
