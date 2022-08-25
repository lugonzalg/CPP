#include "mutantstack.hpp"
MutantStack<T>::iterator&	MutantStack::start() {
	return (MutantStack::c)[0];
}

MutantStack<T>::iterator&	MutantStack::end() {
	return (MutantStack::c)[this->size() - 1];
}

void	MutantStack::iterator:operator++ () {};
void	MutantStack::iterator:operator-- () {};

bool	MutantStack::iterator:operator== (iterator const&) { return false; };
bool	MutantStack::iterator:operator!= (iterator const&) { return false; };
