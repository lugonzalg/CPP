#include <string>
#include <iostream>

int main(int ac, char *av[])
{
    (void)ac;
    (void)av;
    std::string     word;
    std::string*    stringPTR;
    std::string&    stringREF = word;

    stringPTR = &word;
    word = "HI THIS IS BRAIN";
    std::cout << &word << "  " << stringPTR << "  " << &stringREF << std::endl;
    std::cout << *stringPTR << "  " << stringREF << std::endl;
    return 0;
}
