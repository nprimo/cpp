#include "utils.hpp"

std::string	getFileContent(char *filepath) {
	std::string		line;
	std::ifstream	file (filepath);
	std::stringstream	ss;

	if (file.is_open()) {
		while(getline(file, line)) {
			ss << line << std::endl;
		}
		file.close();
	}
	return ss.str();
}


int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: Run " << av[0] << " <filepath>!" << std::endl;
		return 1;
	}

	std::string		line;
	std::ifstream	file (av[1]);
	BitcoinExchange	exchange = BitcoinExchange(EXCHANGE_PATH);

	if (file.is_open()) {
		while(getline(file, line)) {
			std::cout << "==========" << std::endl;
			std::cout << line << std::endl;

			if (line.find("|") != std::string::npos) {
				std::string		date_str = line.substr(0, line.find(" |"));
				std::string 	value_str = line.substr(line.find("|") + 1);

				isValidDate(date_str);
				// std::cout << "exchange of date: " << exchange.getExchangeValue(date_str) << std::endl;
				if (isValidValue(value_str)) {
					float	value = strToFloat(value_str);
					std::cout << "value: " << value << std::endl;
				} else {
					std::cout << "Error: wrong value format" << std::endl;
				}
			} else {
				std::cout << "Error: wrong format in line" << std::endl;
			}
		}
		file.close();
	} else {
		std::cout << "Error: cannot open " << av[1] << std::endl;
	}
	return 0; 
}
