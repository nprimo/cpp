#include "Date.hpp"

Date::Date() {};

Date::Date(const Date &other) {
	_year = other._year;	
	_month = other._month;
	_date = other._date;
}

Date::~Date() {}

Date	&Date::operator=(const Date &other) {
	_year = other._year;	
	_month = other._month;
	_date = other._date;
	return (*this);
}
