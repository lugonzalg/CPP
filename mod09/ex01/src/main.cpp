#include <iostream>

#include "RPN.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc == 1)
			std::cerr << "Error: no parameter provided.\n";
		else
		{
			std::cerr << "Error: more than one parameter provided.\n";
			std::cerr << "Be sure that all arguments are surrounded by (\").\n";
		}
		return (1);
	}
	RPN	rpn(argv[1]);
	try
	{
		rpn.handle_collection();
	}
	catch (RPN::BadInput& e)
	{
		std::cerr << e;
		return (1);
	}
	catch (RPN::BadNumberRange& e)
	{
		std::cerr << e;
		return (1);
	}
	catch (RPN::BadEnd& e)
	{
		std::cerr << e;
		return (1);
	}

	std::cout << rpn;

	return (0);
}
