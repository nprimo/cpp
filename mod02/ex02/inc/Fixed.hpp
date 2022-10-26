#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					fixed_point;
		static const int	fract_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &a);
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(void);
		Fixed&	operator=(const Fixed &a);
		void	setRawBits(const int raw);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
		// comparison
		bool	operator>(const Fixed &a);
		bool	operator>=(const Fixed &a);
		bool	operator<(const Fixed &a);
		bool	operator<=(const Fixed &a);
		bool	operator==(const Fixed &a);
		bool	operator!=(const Fixed &a);
		// arithmetic operation
		Fixed	operator+(const Fixed &a);
		Fixed	operator-(const Fixed &a);
		Fixed	operator*(const Fixed &a);
		Fixed	operator/(const Fixed &a);
		// increment
		Fixed	operator++(int);
		Fixed&	operator++(void);
		// decrement 
		Fixed	operator--(int);
		Fixed&	operator--(void);
		// min max functions
		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	min(const Fixed &a, const Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static Fixed&	max(const Fixed &a, const Fixed &b);
};

std::ostream&	operator<<(std::ostream& out, const Fixed &val);

#endif
