#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "-- WrongAnimal default constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "-- WrongAnimal copy constructor" << std::endl;
	this->type = other.type;
	return ;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "-- WrongAnimal destructor" << std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Random WrongAnimal sound..." << std::endl;
	return ;
}
