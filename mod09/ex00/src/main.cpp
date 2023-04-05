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
		bool first_line = true;
		while(getline(file, line)) {
			if (first_line == true) {
				first_line = false;
				continue;
			}
			if (line.find("|") != std::string::npos) {
				std::string		date_str = line.substr(0, line.find(" |"));
				std::string 	value_str = line.substr(line.find("|") + 1);

				if (isValidValue(value_str) && isValidDate(date_str)) {
					float	value = strToFloat(value_str);
					float	exchange_value = exchange.getExchangeValue(date_str);

					std::cout << date_str << " => " << value << " = " << \
						exchange_value * value << std::endl;
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
