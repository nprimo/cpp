#include "../inc/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "-- Default Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(const Cat &other)
{
	std::cout << "-- Cat copy constructor called" << std::endl;
	this->type = other.type;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "-- Cat destructor called" << std::endl;
	delete this->brain;
	return ;
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "-- Cat copy operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaow Miaow" << std::endl;
	return ;
}
