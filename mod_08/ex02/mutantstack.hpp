#ifndef	MUTANTSTACK_HPP
#define	MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <class T>
class MutantStack : public std::stack<T>
{
    using typename std::stack<T>::c;
	private:

	protected:

	public:
		class iterator
		{
			public:
				void	operator++ ();
				void	operator-- ();

				bool	operator== (iterator const&);
				bool	operator!= (iterator const&);

		};

		MutantStack<T>::c	begin() {
			return std::begin(c);
		}

		MutantStack<T>::c	begin() {
			return std::begin(c);
		}
		//iterator&	begin();
		//iterator&	end();
};

#endif
