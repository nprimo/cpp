#include "utils.hpp"

// checks
bool is_valid_input(char **input_num) {
	unsigned pos = 1;

	while (input_num[pos]) {
		std::string num = input_num[pos];
		for (unsigned i = 0; i < num.length(); i++) {
			if (!std::isdigit(num[i])) {
				return false;
			}
		}
		pos++;
	}
	return true;
}

bool	is_preliminary_ok(int ac, char **av) {
	if (ac == 1) {
		std::cout << "Error! 1" << std::endl;
		return false;
	}
	if (!is_valid_input(av)) {
		std::cout << "Error! 2" << std::endl;
		return false;
	}
	return true;
}

// general 
int str_to_int(char *int_str) {
	std::stringstream	ss(int_str);
	int					num;

	ss >> num;
	return num;
}
