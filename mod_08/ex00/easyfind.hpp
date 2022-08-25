#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#define OK		 	"\033[92m"
#define FAIL 		"\033[91m"
#define END 		"\033[0m"

#include <iterator>
#include <set>
#include <list>
#include <deque>
#include <stack>

class	NotFound : virtual public std::exception
{
	public:
		virtual const char *what() const throw() {
			return "Key value not found\n";
		}
};

class FillError : virtual public std::exception
{
	public:
		virtual const char	*what() const throw() {
			return "Raise Error: Filling failed";
		}
};

template<typename C>
void	easyfind(C &container, int key) {
	typename C::iterator	handle;

	handle = std::find(container.begin(), container.end(), key);
	if (handle == container.end())
		throw NotFound();
}

template<typename C>
void	fill(C& container) {
	for (int i = 0; i < 11; i++) {
		container.insert(i);
	}
}

template<typename C>
void	fill(std::list<C>& container) {
	for (int i = 0; i < 11; i++) {
		container.push_front(i);
	}
}

template<typename C>
void	fill(std::deque<C>& container) {
	for (int i = 0; i < 11; i++) {
		container.push_front(i);
	}
}

template<typename C>
void	fill(std::stack<C>& container) {
	for (int i = 0; i < 11; i++) {
		container.push(i);
	}
}

template <typename C>
static void	callFill(C& container) {
	try
	{
		::fill(container);
	}
	catch (std::exception const& e)
	{
		std::cout << FAIL << e.what() << END;
	}
}

template <typename C>
static void	callFind(C& container, int n) {
	try
	{
		::easyfind(container, n);
		std::cout << OK << "VALOR ENCONTRADO " << std::endl << END;
	}
	catch (std::exception const& e)
	{
		std::cout << FAIL << e.what() << END;
	}
}

#endif
