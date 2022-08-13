#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>

class Span
{
	private:
		int			*_container;
		unsigned	_maxLen;
		unsigned	_currLen;
		int			_min;
		int			_secondMin;
		int			_max;

		void		_handleSpan(int);

	public:
		Span(unsigned n);
		Span(Span const&);
		~Span();

		//Span&	operator= (Span const&);

		void	addNumber(int);

	class FullContainer : virtual public std::exception
	{
		virtual const char	*what() const throw();
	};


};

#endif
