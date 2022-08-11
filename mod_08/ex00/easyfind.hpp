#ifndef EASYFIND_HPP
#define EASYFIND_HPP

class	NotFound : virtual public std::exception
{
	public:
		virtual const char *what() const throw() {
			return "Key value not found";
		}
};

template<typename C>
C&	easyfind(C const& container, int key) {
	unsigned	sz;

	sz = container.size();
	for (unsigned i = container.begin(); i < sz; i++) {
		if (container[i] == key)
			return container[i];
	}
	throw NotFound();
}

#endif
