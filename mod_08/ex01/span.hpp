#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>

class Span : virtual public std::list<int>
{
	private:
		unsigned	_maxLen;
		unsigned	_currLen;
		int			_min;
		int			_secondMin;
		int			_max;

	public:
		Span(unsigned n)};
		Span(Span const&);
		~Span() {};

		//Span&	operator= (Span const&);
		

		void	addNumber(unsigned);


};

#endif
