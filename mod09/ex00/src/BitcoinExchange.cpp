#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
	_exchange = other._exchange;
}

BitcoinExchange::BitcoinExchange(std::string fpath) {
	std::ifstream	file (fpath.c_str());
	std::string		line;
	const char		*delimiter = ",";

	if (file.is_open()) {
		while(getline(file, line)) {
			if (line.find("date") != std::string::npos) {
				continue;
			}
			if (line.find(delimiter) != std::string::npos) {
				std::string		date_str = line.substr(0, line.find(delimiter));
				std::string 	value_str = line.substr(line.find(delimiter) + 1);

				_exchange[date_str] = strToFloat(value_str);
			}
		}
		file.close();
	}
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	_exchange = other._exchange;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

float	BitcoinExchange::getExchangeValue(std::string date_str) {
	return _exchange[date_str];
}
