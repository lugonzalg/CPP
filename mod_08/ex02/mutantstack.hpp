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
		class iterator //: virtual public std::iterator<std::input_iterator_tag, T>
		{
			void	operator++ (T) {};
			void	operator-- (T) {};
		};

		MutantStack<T>::iterator&	begin();
		MutantStack<T>::iterator&	end();

};

#endif
