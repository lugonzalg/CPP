#include <iostream>

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
		std::cerr << "Error: Bad arguments, this program only accepts 1 parameter.\n";
	BTC	btc(argv[1]);

	if (btc.check_files())
		return (1);
	btc.load_file();
	btc.load_balance();
}
