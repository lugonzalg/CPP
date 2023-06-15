#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>

# define SPACE 			' '
# define DEFAULT		10
# define OPERATORS_SZ	4


class RPN
{
	private:

		typedef	void (RPN::*operation)();
		typedef struct	s_operators
		{
			char		key;
			operation	calc;
		}	t_operators;

		std::stack<int>		_numbers;
		std::string			_valid;
		std::stringstream	_ss;
		int					_first;
		int					_second;
		int					_result;
		t_operators			_operators[OPERATORS_SZ];

		void	_assign_number(const std::string &);
		void	_calculus(const std::string &);
		void	_sum();
		void	_substract();
		void	_division();
		void	_multiplication();

	protected:

	public:

		RPN();
		RPN(const RPN&);
		RPN(const std::string &);
		~RPN();

		void	handle_collection();
		int		get_result() const;

		RPN& operator=(const RPN&);

		class BadEnd : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class BadInput : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class BadNumberRange : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream&	operator<<(std::ostream&, RPN&);
std::ostream&	operator<<(std::ostream&, RPN::BadInput&);
std::ostream&	operator<<(std::ostream&, RPN::BadNumberRange&);
std::ostream&	operator<<(std::ostream&, RPN::BadEnd&);

#endif //RPN_HPP
