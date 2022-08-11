#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<class T>
void	swap(T *a, T *b) {
	T	c;

	c = *b;
	*b = *a;
	*a = c;
}

template<class T>
T	min(T a, T b) {
	if (a < b)
		return a;
	return b;
}

template <>
std::string min<std::string>(std::string a, std::string b) {
	if (strcmp(a.c_str(), b.c_str()) != -1)
		return b;
	return a;
}

template<class T>
T	max(T a, T b) {
	if (b > a)
		return b;
	return a;
}

template <>
std::string max<std::string>(std::string a, std::string b) {
	if (strcmp(a.c_str(), a.c_str()) != -1)
		return a;
	return b;
}

#endif
