#include <iostream>
#include <locale>
#include <cstdlib>

#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const std::string &collection) : _valid("0123456789+-/*"), _ss(collection)
{
	this->_operators[0].key = '+';
	this->_operators[0].calc = &RPN::_sum;
	this->_operators[1].key = '-';
	this->_operators[1].calc = &RPN::_substract;
	this->_operators[2].key = '/';
	this->_operators[2].calc = &RPN::_division;
	this->_operators[3].key = '*';
	this->_operators[3].calc = &RPN::_multiplication;;
}

RPN::RPN(const RPN& obj)
{
	*this = obj;
}

RPN::~RPN()
{}

RPN&	RPN::operator=(const RPN& obj)
{
	this->_ss << obj._ss;
	this->_numbers = obj._numbers;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, RPN::BadEnd& err)
{
	os << err.what();
	return (os);
}

std::ostream&	operator<<(std::ostream& os, RPN::BadInput& err)
{
	os << err.what();
	return (os);
}

std::ostream&	operator<<(std::ostream& os, RPN::BadNumberRange& err)
{
	os << err.what();
	return (os);
}

std::ostream&	operator<<(std::ostream& os, RPN& obj)
{
	os << "THE RESULT IS: " << obj.get_result();
	return (os);
}

const char	*RPN::BadEnd::what() const throw ()
{
	return ("Error: unfinished operation, check the input.\n");
}

const char	*RPN::BadInput::what() const throw ()
{
	return ("Error: bad argument format, check the input.\n");
}

const char	*RPN::BadNumberRange::what() const throw ()
{
	return ("Error: the provided number is bigger than 9, check the input.\n");
}

void	RPN::_assign_number(const std::string &token)
{
	int	num;

	num = std::atoi(token.c_str());
	if (num > DEFAULT - 1)
		throw RPN::BadNumberRange();

	this->_numbers.push(num);
}

void	RPN::_calculus(const std::string &token)
{
	size_t	i;

	if (this->_numbers.size() == 1)
		throw RPN::BadInput();

	this->_second = this->_numbers.top();
	this->_numbers.pop();
	this->_first = this->_numbers.top();
	this->_numbers.pop();

	for (i = 0; i < OPERATORS_SZ; i++)
	{
		if (this->_operators[i].key == *token.c_str())
		{
			(this->*_operators[i].calc)();
			break ;
		}
	}
	this->_numbers.push(this->_result);
}

void	RPN::handle_collection()
{
	int 		retval;

	for (std::string token;std::getline(this->_ss, token, SPACE);)
	{
		if (token.size() != 1)
			throw BadInput();

		for (size_t i = 0; i < token.size(); i++)
		{
			retval = this->_valid.find(token[i]);
			if (retval == -1)
				throw RPN::BadInput();
		}
		if (std::isdigit(token[0]))
			this->_assign_number(token);
		else
			this->_calculus(token);
	}
	if (this->_numbers.size() != 1)
		throw RPN::BadInput();
}

int		RPN::get_result() const { return (this->_result); }

void	RPN::_sum() { this->_result = this->_first + this->_second; }
void	RPN::_substract() { this->_result = this->_first - this->_second; }
void	RPN::_division() { this->_result = this->_first / this->_second; }
void	RPN::_multiplication() { this->_result = this->_first * this->_second; }
