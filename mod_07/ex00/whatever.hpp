#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

//SWAP SIN VARIABLE AUXILIAR
/*
template<class T>
void	swap(T& a, T& b) {
	b += a;
	a = b - a;
	b -= a;
}*/

template<class T>
void	swap(T& a, T& b) {
	T	c;

	c = b;
	b = a;
	a = c;
}

template<class T>
T&	min(T& a, T& b) {
	if (a < b)
		return a;
	return b;
}

template<class T>
T&	max(T& a, T& b) {
	if (b < a)
		return a;
	return b;
}

#endif
