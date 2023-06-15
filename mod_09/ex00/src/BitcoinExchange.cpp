#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <stdlib.h>

#include "BitcoinExchange.hpp"

BTC::BTC()
{
}

BTC::BTC(const char *file_name) : std::ifstream(HISTORY), _input_file(file_name)
{
	this->_curr_time = std::time(NULL);
	if (this->is_open())
		std::cout << file_name << " loaded\n";
}

BTC::~BTC()
{
}

bool	BTC::check_files()
{
	if (!this->is_open())
	{
		std::cerr << "Error: Bad data file\n";
		return (true);
	}
	else if (!this->_input_file.is_open())
	{
		std::cerr << "Error: Bad input file\n";
		return (true);
	}
	return (false);
}

bool	BTC::_check_date(const std::string &date)
{
	std::string			token[3];
	std::stringstream	ss(date);
	int					num;

	std::getline(ss, token[0], '-');
	num = std::atoi(token[0].c_str());
	if (num < 0 || num > 2023 || token[0].size() < 4)
		return (true);

	std::getline(ss, token[1], '-');
	num = std::atoi(token[1].c_str());
	if (num < 0 || num > 12 || token[1].size() < 1)
		return (true);

	std::getline(ss, token[2], '\n');
	num = std::atoi(token[2].c_str());
	if (num < 0 || num > 31 || token[2].size() < 1)
		return (true);
	return (false);
}

date_price	BTC::to_epoch(const std::string &date, const std::string &price)
{
	struct tm	tm = {};
	char		*end;
	std::time_t	epoch;
	double		price_num;

	if (this->_check_date(date))
		epoch = -1;
	else
	{
		end = strptime(date.c_str(), "%Y-%m-%d ", &tm);
		if (!end || *end)
			epoch = -1;
		else
			epoch = std::mktime(&tm);
	}
	price_num = std::atof(price.c_str());
	return (std::make_pair(epoch, price_num));
}

std::pair<std::string, std::string>	split(const std::string &line, char delimiter)
{
	std::stringstream	ss(line);
	std::string			date;
	std::string			price;

	std::getline(ss, date, delimiter);
	std::getline(ss, price, '\n');
	return (std::make_pair(date, price));
}

bool	BTC::load_file()
{
	std::pair<std::string, std::string> input_data;
	std::string	line;
	date_price	place_holder;

	std::getline(*this, line);
	while (std::getline(*this, line, '\n'))
	{
		input_data = split(line, ',');
		place_holder = this->to_epoch(input_data.first, input_data.second);
		this->_history.push_back(place_holder);
	}
	this->_history.sort();
	return (false);
}

void	BTC::_query_price(date_price place_holder, const std::string &date)
{
	std::list<date_price>::iterator	it;

	if (place_holder.second < 0)
	{
		std::cerr << "Error: negative number\n";
		return ;
	}
	else if (place_holder.second > 1000)
	{
		std::cerr << "Error: too large number\n";
		return ;
	}
	else if (place_holder.first == -1)
	{
		std::cerr << "Error: bad date format => " << date << std::endl;
		return ;
	}

	it = std::lower_bound(this->_history.begin(), this->_history.end(), place_holder);
	std::cout << date << "=> " << place_holder.second << " = " << place_holder.second * it->second << std::endl;
}

bool	BTC::load_balance()
{
	date_price	place_holder;
	std::string	line;
	std::pair<std::string, std::string> input_data;

	std::getline(this->_input_file, line);
	for(; std::getline(this->_input_file, line);)
	{
		input_data = split(line, '|');
		place_holder = this->to_epoch(input_data.first, input_data.second);
		this->_query_price(place_holder, input_data.first);
	}
	return (false);
}
