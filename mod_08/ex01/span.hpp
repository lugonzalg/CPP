#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
	private:
		std::vector<int>	_v;
		unsigned	_maxLen;
		unsigned	_currLen;

		void		_handleSpan(int);

	public:
		Span(unsigned n);
		Span(Span const&);
		~Span();

		//Span&	operator= (Span const&);

		void	addNumber(int);
		template <typename C>
		void	addNumberSort(C& c) {
			for (typename C::iterator it = c.begin(); it != c.end(); it++) {
				if (this->_currLen == this->_maxLen)
					throw Span::FullContainer();
				this->_v.push_back(*it);
				this->_currLen++;
			}

		}
		int		shortestSpan();
		int		longestSpan();

	class FullContainer : virtual public std::exception
	{
		public:
			virtual const char	*what() const throw();
	};
};

#endif
