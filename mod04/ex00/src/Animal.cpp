#include "../inc/Animal.hpp"

Animal::Animal(void)
{
	std::cout << "-- Animal default constructor" << std::endl;
	return ;
}

Animal::Animal(const Animal &other)
{
	std::cout << "-- Animal copy constructor" << std::endl;
	this->type = other.type;
	return ;
}
Animal::~Animal(void)
{
	std::cout << "-- Animal destructor" << std::endl;
	return ;
}

Animal&	Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Random animal sound..." << std::endl;
	return ;
}
