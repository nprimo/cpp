#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixed_point = 0;
	return ;
}

Fixed::Fixed(const Fixed &a)
{
	this->fixed_point = a.getRawBits();
	return ;
}

Fixed::Fixed(const int i)
{
	this->setRawBits(i << this->fract_bits);
	return ;
}

Fixed::Fixed(const float f)
{
	this->setRawBits(roundf(f * (1 << this->fract_bits)));
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed&	Fixed::operator=(const Fixed &a)
{
	this->fixed_point = a.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return this->fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
	return ;
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point >> this->fract_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float) this->fixed_point / (float) (1 << this->fract_bits));
}

// comparison
bool	Fixed::operator>(const Fixed &a)
{
	return (this->getRawBits() > a.getRawBits());
}

bool	Fixed::operator<(const Fixed &a)
{
	return !(*this > a);
}

bool	Fixed::operator==(const Fixed &a)
{
	return !((*this > a) || (*this < a));
}

bool	Fixed::operator>=(const Fixed &a)
{
	return ((*this > a) && (*this == a));
}

bool	Fixed::operator<=(const Fixed &a)
{
	return ((*this < a) && (*this == a));
}

bool	Fixed::operator!=(const Fixed &a)
{
	return ((*this > a) || (*this < a));
}

// arithmetic operation
Fixed	Fixed::operator+(const Fixed &a)
{
	Fixed 	result;

	result.setRawBits(this->getRawBits() + a.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &a)
{
	Fixed result;

	result.setRawBits(this->getRawBits() - a.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &a)
{
	Fixed	result;

	result.setRawBits(this->getRawBits() * a.getRawBits());
	result.setRawBits(result.getRawBits() / (1 << result.fract_bits));
	return (result);
}

Fixed	Fixed::operator/(const Fixed &a)
{
	Fixed	result;

	result.setRawBits(((float)this->getRawBits() / a.getRawBits())
			* (1 << this->fract_bits));
	return (result);
}

// increment
Fixed	Fixed::operator++(int)
{
	Fixed	prev_value;

	prev_value = Fixed(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (prev_value);
}

Fixed&	Fixed::operator++(void)
{
	(*this)++;
	return (*this);
}

// decrement
Fixed	Fixed::operator--(int)
{
	Fixed	prev_value;

	prev_value = Fixed(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (prev_value);
}

Fixed&	Fixed::operator--(void)
{
	(*this)--;
	return (*this);
}

// min max functions
Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (&a < &b)
		return ((Fixed&) a);
	return ((Fixed&) b);
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (&a > &b)
		return ((Fixed&) a);
	return ((Fixed&) b);
}

std::ostream&	operator<<(std::ostream& out, const Fixed &val)
{
	out << val.toFloat();
	return (out);
}
