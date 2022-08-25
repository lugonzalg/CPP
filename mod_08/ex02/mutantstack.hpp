#ifndef	MUTANTSTACK_HPP
#define	MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template<class T>
class MutantStack : virtual public std::stack<T>
{
	private:

	protected:

	public:
		typedef typename MutantStack<T>::container_type::iterator iterator;
		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
		typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator	begin() {
			return this->c.begin();
		}
		iterator	end() {
			return this->c.end();
		}

		const_iterator	cbegin() const {
			return this->c.cbegin();
		}
		const_iterator	cend() const {
			return this->c.cend();
		}

		reverse_iterator	rbegin() {
			return this->c.rbegin();
		}
		reverse_iterator	rend() {
			return this->c.rend();
		}

		reverse_iterator	crbegin() {
			return this->c.rbegin();
		}
		reverse_iterator	crend() {
			return this->c.crend();
		}
};

#endif
