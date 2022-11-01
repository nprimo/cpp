#include "../inc/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "-- Default Brain constructor" << std::endl;
	return ;
}

Brain::Brain(const Brain &other)
{
	std::cout << "-- Brain copy constructor" << std::endl;
	for (unsigned i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return ;
}

Brain::~Brain()
{
	std::cout << "-- Brain destructor" << std::endl;
	return ;
}

Brain&	Brain::operator=(const Brain &other)
{
	std::cout << "-- Brain copy operator" << std::endl;
	for (unsigned i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}
