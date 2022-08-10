#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<class T>
void	swap(T *a, T *b) {
	T	c;

	c = *b;
	*b = *a;
	*a = c;
}

#endif
