#include "Brain.hpp"
#include <iostream>

/*************/
/*CONSTRUCTOR*/
/*************/

Brain::Brain() {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "oiqkfem";
    std::cout << "Default Brain constructor" << std::endl;
}

Brain::Brain(Brain const& src) {
    std::cout << "Copy Brain constructor" << std::endl;
    *this = src;
}

Brain::Brain(std::string const& idea) {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
    std::cout << "String Brain constructor" << std::endl;
}

/*************/
/*DESTRUCTOR*/
/*************/

Brain::~Brain() {
    std::cout << "Default Brain destructor" << std::endl;
}

/**********/
/*OVERLOAD*/
/**********/

Brain&   Brain::operator= (Brain const& src) {
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return (*this);
}
