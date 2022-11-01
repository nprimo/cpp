#include "../inc/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "-- Default Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(const Dog &other)
{
	std::cout << "-- Dog copy constructor called" << std::endl;
	this->type = other.type;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "-- Dog destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "-- Dog copy operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
	return ;
}
