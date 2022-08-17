#include "mutantstack.hpp"

MutantStack<T>::iterator&	MutantStack::start() {
}

MutantStack<T>::iterator&	MutantStack::end() {
}

void	MutantStack::iterator:operator++ () {};
void	MutantStack::iterator:operator-- () {};

bool	MutantStack::iterator:operator== (iterator const&) { return false; };
bool	MutantStack::iterator:operator!= (iterator const&) { return false; };
