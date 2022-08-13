#ifndef ITER_HPP
#define ITER_HPP

template <class T>
void	trans(T &ptr) {
	ptr = 42;
}

/*template<>
void	trans(float *pos) {
	pos = 42.42f;
}*/

template <class T>
void	iter(T &src, int sz, void(*ft)(T &)) {
	for (int i = 0; i < sz; i++)
		ft(&src[i]);
}

#endif
