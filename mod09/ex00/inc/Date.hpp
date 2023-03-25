#ifndef DATE_HPP
# define DATE_HPP

# include "utils.hpp"

class Date {
	private:
		int 				_year;
		int					_month;
		int 				_date;

	public:
		Date();
		Date(const Date &other);
		~Date();
		Date	&operator=(const Date &other);
};

#endif
