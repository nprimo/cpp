#include "utils.hpp"

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

int str_to_int(char *int_str) {
	std::stringstream	ss(int_str);
	int					num;

	ss >> num;
	return num;
}


void print_result() {
	std::cout << "Unsorted input: " << std::endl;
	std::cout << "sorted input: " << std::endl;
	std::cout << "time to sort using container 1: " << std::endl;
	std::cout << "time to sort using container 2: " << std::endl;
}
