#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

//src https://stackoverflow.com/questions/34940023/c11-for-loop-in-a-template-function

template <class T>
void	trans(T& pos) {
	pos = 42;
}

template<>
void	trans(float &pos) {
	pos = 42.42f;
}

template <class T>
void	iter(T * src, int sz, void(*ft)(T &)) {
	for (int i = 0; i < sz; i++)
		ft(src[i]);
}

#endif
