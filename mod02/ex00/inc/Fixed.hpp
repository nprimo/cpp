#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
		int					fixed_point;
		static const int	bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed &a);
		~Fixed(void);
		Fixed&	operator=(Fixed &a);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
};

#endif