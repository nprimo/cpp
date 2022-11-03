#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "-- Bureaucrat default constructor" << std::endl;
	this->name = "default";
	this->grade = 150;
}

Bureaucrat::Bureaucrat()
{
	std::cout << "-- Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned grade)
{
	this->name = name;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "-- Bureaucrat copy constructor" << std::endl;
	this->name = other.name; // this is constant ... 
	this->grade = other.grade;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "-- Bureaucrat destructor" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other)
{
	this->name = other.name; // this is constant 
	this->grade = other.grade;
	return (*this);
}


