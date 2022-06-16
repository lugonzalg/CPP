#include "Karen.hpp"
#include <iostream>

Karen::Karen() {
   this->_keys[0].key    = "DEBUG";
   this->_keys[0].ft_ptr = &Karen::debug; 
   this->_keys[1].key    = "INFO";
   this->_keys[1].ft_ptr = &Karen::info;
   this->_keys[2].key    = "WARNINGS";
   this->_keys[2].ft_ptr = &Karen::warnings; 
   this->_keys[3].key    = "ERROR";
   this->_keys[3].ft_ptr = &Karen::error; 
}

Karen::~Karen() {}

void    Karen::debug() { std::cout << "DEBUG" << std::endl;}

void    Karen::info() { std::cout << "INFO" << std::endl;}

void    Karen::warnings() { std::cout << "WARNINGS" << std::endl;}

void    Karen::error() { std::cout << "ERROR" << std::endl;}

void    Karen::complain(std::string key) {
    size_t  i;

    for (i = 0; i < 4 and this->_keys[i].key != key; i++){}
    if (i != 4)
        (this->*_keys[i].ft_ptr)();
    else
        std::cout << "Braaaaainzzz, ups not my exercise D:" << std::endl;
}
