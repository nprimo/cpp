#include "Date.hpp"

Date::Date() {}

Date::Date(std::string date_str) {
	// only valid format YYYY-MM-dd
	if (isValidDate(date_str)) {
		std::string	year_str = date_str.substr(0, 4);
		std::string	month_str = date_str.substr(5, 2);
		std::string	day_str = date_str.substr(-2, 2);

		_year = strToInt(year_str);		
		_month = strToInt(month_str);		
		_day = strToInt(day_str);	
	}
}

Date::Date(const Date &other) {
	_year = other._year;	
	_month = other._month;
	_day = other._day;
}

Date::~Date() {}

Date	&Date::operator=(const Date &other) {
	_year = other._year;	
	_month = other._month;
	_day = other._day;
	return (*this);
}
