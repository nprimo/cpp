#include "utils.hpp"

bool	isValidValue(std::string value_str) {
	float				value;
	std::stringstream	ss(value_str);

	return (ss >> value && value >= 0 && value <= 100);
}

float	strToFloat(std::string float_str) {
	// assuming it's a good format
	std::stringstream	ss(float_str);
	float				value;

	ss >> value;
	return value;
}

int		strToInt(std::string int_str) {
	int	value;
	std::stringstream	ss(int_str);
	
	if (ss >> value) {
		return value;
	}
	// it will always be a wrong value for this specific case
	return -1;
}

bool	isLeapYear(int year) {
	return (
		year % 4 == 0 
		&& (year % 400 == 0 || year % 100 != 0)
	);
}

bool	isValidDate(std::string	date_str) {
	std::string			year_str;
	int					year;
	std::string			month_str;
	int					month;
	std::string			day_str;
	int					day;
	std::map<int, int>	days_in_month;
	days_in_month[1] = 31;
	days_in_month[2] = 28;
	days_in_month[3] = 31;
	days_in_month[4] = 30;
	days_in_month[5] = 31;
	days_in_month[6] = 30;
	days_in_month[7] = 31;
	days_in_month[8] = 31;
	days_in_month[9] = 30;
	days_in_month[10] = 31;
	days_in_month[11] = 30;
	days_in_month[12] = 31;

	if (date_str.find("-") == std::string::npos
		|| date_str.find("-") == date_str.rfind("-")) {
		return false;
	}
	year_str = date_str.substr(0, date_str.find("-"));
	year = strToInt(year_str);
	if (isLeapYear(year)) {
		days_in_month[2] += 1;
	}
	month_str = date_str.substr(date_str.find("-") + 1, 2);
	month = strToInt(month_str);
	day_str = date_str.substr(date_str.rfind("-") + 1);
	day = strToInt(day_str);
	if (
		(year < 0 || month < 0 || day < 0)
		|| (month < 1 || month > 12)
		|| (day > days_in_month[month])
		) {
		return false;
	}
	std::cout << "year: " << year << std::endl;
	std::cout << "month: " << month << std::endl;
	std::cout << "day: " << day << std::endl;
	return true;
}

