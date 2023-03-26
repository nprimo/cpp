#include "Date.hpp"

Date::Date() {}

Date::Date(std::string date_str) {
	// only valid format YYYY-MM-dd
	if (isValidDate(date_str)) {
		std::string	year_str = date_str.substr(0, 4);
		std::string	month_str = date_str.substr(5, 2);
		std::string	day_str = date_str.substr(8, 2);

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

Date	Date::operator+(int delta) {
	Date	new_date((*this));

	std::map<int, int>	days_in_month;
	days_in_month[1] = 31;
	days_in_month[2] = isLeapYear(_year) ? 29 : 28;
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

	new_date._day += delta;
	// make cases when new_day is less then 1 -> month need to be -1 
	//		- if month is less than 1 need to make year -1 
	if (new_date._day < 1) {
		new_date._month -= 1;
		if (new_date._month < 1) {
			new_date._year -= 1;
			new_date._month = 12;
			new_date._day = 31;
		}
		new_date._day = days_in_month[new_date._month];
	}
	// make cases when new_days is more then days_in month -> month need to be +1
	//		- if month is more than 12 need to make year +1 
	if (new_date._day > days_in_month[new_date._month]) {
		new_date._month += 1;
		if (new_date._month > 12) {
			new_date._year += 1;
			new_date._month = 1;
			new_date._day = 31;
		}
		new_date._day = days_in_month[new_date._month];
	}
	return (new_date);
}

std::string	Date::toStr() {
	std::stringstream	ss;

	ss << _year << "-" << std::setw(2) << std::setfill('0') << _month \
		<< "-" << std::setw(2) << std::setfill('0') << _day;
	return (ss.str());
}
