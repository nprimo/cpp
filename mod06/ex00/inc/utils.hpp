#ifndef UTILS_H
# define UTILS_H

# include <sstream>
# include <string>
# include <iostream>

bool	isInList(std::string val, std::string list[]);
int		ft_stoi(const std::string s);
bool	isChar(const std::string s);
bool	isInt(const std::string s);
bool	isFloat(const std::string s);
bool	isDouble(const std::string s);

#endif
