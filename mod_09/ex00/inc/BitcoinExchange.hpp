#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <fstream>
#include <list>
#include <utility>
#include <string>
#include <ctime>

# define HISTORY	"doc/data.csv"

typedef std::pair<int, double>	date_price;

class BTC : public std::ifstream
{
	private:
		std::list<date_price>	_history;
		std::ifstream	_input_file;
		std::time_t		_curr_time;

		bool	_check_date(const std::string &);
		void	_query_price(date_price, const std::string &);

	protected:

	public:

		BTC();
		BTC(const char *);
		~BTC();

		bool	check_files();
		bool	load_file();
		bool	load_balance();
		date_price	to_epoch(const std::string &date, const std::string &price);
};

#endif //BITCOINEXCHANGE_HPP
