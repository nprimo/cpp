#include "../inc/Animal.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "-- Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "-- WrongCat copy constructor called" << std::endl;
	this->type = other.type;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "-- WrongCat destructor called" << std::endl;
	return ;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	std::cout << "-- WrongCat copy operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaow Miaow -- not showing" << std::endl;
	return ;
}
