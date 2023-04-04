#include "utils.hpp"

RPN::RPN() {}

RPN::RPN(std::string RPN_input) {
	_RPN_input = RPN_input;	
}

RPN::RPN(const RPN &other) {
	_RPN_input = other._RPN_input;
}

RPN::~RPN() {};

RPN&	RPN::operator=(const RPN &other) {
	_RPN_input = other._RPN_input;
	return (*this);
}

int	RPN::resolve() {
	std::stringstream	ss(_RPN_input);
	std::string			token;
	std::string			operator_list = "+-/*";
	std::stack<int>		results;
	int 				new_result;

	while(ss >> token) {
		if (token.size() != 1) {
			throw ("Error!");
		}
		if (operator_list.find(token[0]) != std::string::npos) {
			if (results.size() < 2) {
				throw ("Error!");
			}
			int second_num = results.top(); 
			results.pop();
			int first_num = results.top();
			results.pop();

			new_result = resolve_op(first_num, second_num, token[0]);
		}
		else 
			new_result = token[0] - '0';
		results.push(new_result);
	}
	if (results.size() != 1) {
		throw ("Error!");
	}
	return results.top();	
}

const char*	RPN::RPNError::what() const throw() {
	return "Error!";
}
