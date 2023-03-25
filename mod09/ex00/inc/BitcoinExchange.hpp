#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include "utils.hpp"
# define EXCHANGE_PATH "cpp_09/data.csv"

class BitcoinExchange {
	private:
		std::map<std::string, float> _exchange;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange(std::string fpath);
		~BitcoinExchange();

		BitcoinExchange	&operator=(const BitcoinExchange &other);
		float			getExchangeValue(std::string date_str);
};

#endif
