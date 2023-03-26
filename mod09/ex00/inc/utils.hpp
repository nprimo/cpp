#ifndef UTILS_HPP
# define UTILS_HPP

// Basic imports
# include <iostream>
# include <cstring>
# include <string>
# include <sstream>
# include <fstream>
# include <iomanip>
// Container
# include <map>

// utils function
bool	isValidValue(std::string value_str);
bool	isValidDate(std::string	date_str);
bool	isLeapYear(int year);
float	strToFloat(std::string float_str);
int		strToInt(std::string int_str);

// BitcoinExchange 
# include "BitcoinExchange.hpp"
# include "Date.hpp"

#endif
