#include "Karen.hpp"
#include <iostream>

int main(int ac, char *av[])
{
    size_t  n;
    Karen karen;
    if (ac != 2)
    {
        std::cerr << "Error: Wrong number of parameters -> " << ac << std::endl;
        return 1;
    }
    n = karen.complain_query(std::string(av[1]));
    switch (n) {
        case 0:
            std::cout << "DEBUG" << std::endl;
        case 1:
            std::cout << "INFO" << std::endl;
        case 2:
            std::cout << "WARNING" << std::endl;
        case 3:
            std::cout << "ERROR" << std::endl;
            break ;
        default:
            std::cout << "wawawiwawo" << std::endl;
    }
    return 0;
}
