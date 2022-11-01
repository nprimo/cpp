#include "../inc/AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "-- AAnimal default constructor" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "-- AAnimal copy constructor" << std::endl;
	this->type = other.type;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "-- AAnimal destructor" << std::endl;
	return ;
}

AAnimal&	AAnimal::operator=(const AAnimal &other)
{
	this->type = other.type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Random Aanimal sound..." << std::endl;
	return ;
}
