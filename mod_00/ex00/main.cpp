#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (*++argv)
	{
		while (**argv)
		{
			std::cout << (char)std::toupper(**argv);
			(*argv)++;
		}
	}
	return (0);
}
