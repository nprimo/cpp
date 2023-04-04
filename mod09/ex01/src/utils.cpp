#include "utils.hpp"

bool	is_valid_char(char c) {
	std::string allowed_operator = "+-/*";
	return (std::isdigit(c)
		|| std::isspace(c)
		|| allowed_operator.find(c) != std::string::npos
	);
}
bool	is_valid_input(char *input) {
	unsigned	pos = 0;

	while(input[pos]) {
		if (!is_valid_char(input[pos]))
			return false;
		pos++;
	}
	return true;
}

int	resolve_op(int first, int second, char op) {
	switch (op) {
		case '+':
			return first + second;
		case '-':
			return first - second;
		case '/':
			return first / second;
		case '*':
			return first * second;
		default:
			return 0;
	}
}
