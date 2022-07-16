#ifndef CAST_HPP
#define CAST_HPP

#include <string>
#include <ostream>

class Cast
{
	private:

		std::string			_str;
		const char*			_c_str;
		int					_n;
		float				_f;
		//double				_d;
		char				_c;
		bool				_has_f;
		bool				_has_digit;
		std::size_t			_len;

		void	_detect();
		void	_isFloat();
		void	_isInt();
		void	_isChar();


	public:

		Cast();
		Cast(const char*);
		Cast(Cast const&);
		~Cast();

		Cast&	operator= (Cast const&);

		void	setSTR(const char*);

		float	getFloat() const;
		float	getInt() const;
		float	getChar() const;
		float	getFlags() const;

		/*
	class EmptySTR : public std::exception
	{
		const char *what() const throw();
	};*/
};

std::ostream&	operator<< (std::ostream&, Cast const&);

#endif
