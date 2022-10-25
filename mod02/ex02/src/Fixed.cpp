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
	std::cout << "Destructor" << std::endl;
	return ;
}

Fixed&	Fixed::operator=(const Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = a.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "function setRawBits called" << std::endl;
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

std::ostream&	operator<<(std::ostream& out, const Fixed &val)
{
	out << val.toFloat();
	return (out);
}
