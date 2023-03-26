#ifndef DATE_HPP
# define DATE_HPP

# include "utils.hpp"

class Date {
	private:
		int 				_year;
		int					_month;
		int 				_day;

	public:
		Date();
		Date(std::string date_str);
		Date(const Date &other);
		~Date();
		Date	&operator=(const Date &other);
		Date	operator+(int delta);
		std::string	toStr();
};

#endif
