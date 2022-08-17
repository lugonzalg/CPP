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
			public:
				void	operator++ ();
				void	operator-- ();

				bool	operator== (iterator const&);
				bool	operator!= (iterator const&);

				T&	operator* () { return this->Data; };
		};

		iterator&	begin();
		iterator&	end();
};

#endif
