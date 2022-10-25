#include "../inc/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
	return ;
}

Fixed::Fixed(Fixed &a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = a.getRawBits();
	return ;
}

Fixed&	Fixed::operator=(Fixed &a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point = a.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
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