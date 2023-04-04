#ifndef RPN_HPP
# define RPN_HPP

# include "utils.hpp"

class RPN {
	private:
		std::string	_RPN_input;

	public:
		RPN();
		RPN(std::string RPN_input);
		RPN(const RPN &other);
		~RPN();
		RPN	&operator=(const RPN &other);
		int	resolve();

	class RPNError : std::exception {
		const char *what() const throw();
	};
};

#endif
