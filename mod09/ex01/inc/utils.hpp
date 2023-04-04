#ifndef UTILS_HPP

# include <iostream>
# include <sstream>
# include <stdexcept>

# include <stack>

# include "RPN.hpp"

bool is_valid_char(char c);
bool is_valid_input(char *input);
int	resolve_op(int first, int second, char op);

#endif
