#include <iostream>

#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cerr << "Error: no parameter provided.\n";
		return (1);
	}
	try
	{
		PmergeMe	pmp(argv + 1);
	}
	catch (PmergeMe::BadInput& e)
	{
		std::cout << e.what();
	}
	(void)argc;
	(void)argv;
	return (0);
}
