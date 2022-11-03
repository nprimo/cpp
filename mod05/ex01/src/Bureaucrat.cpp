#include "../inc/Bureaucrat.hpp"

// Canonical things
Bureaucrat::Bureaucrat() : name("default")
{
	std::cout << "-- Bureaucrat default constructor" << std::endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
	std::cout << "-- Bureaucrat constructor" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
	std::cout << "-- Bureaucrat copy constructor" << std::endl;
	this->grade = other.grade;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "-- Bureaucrat destructor" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "-- Assignment operator called" << std::endl;
	this->grade = other.grade;
	return (*this);
}

// Additional member functions
std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::gradeUp(int amount)
{
	if (this->grade - amount > 0)
		this->grade -= amount;
	else
		throw Bureaucrat::GradeTooHighException();
	
}

void	Bureaucrat::gradeDown(int amount)
{
	if (this->grade + amount < 151)
		this->grade += amount;
	else
		throw Bureaucrat::GradeTooLowException();
}


void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn’t sign "
			<< form.getName() << " because " <<  e.what() << std::endl;
	}
}
// Exception
const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

// How to print
std::ostream&	operator<<(std::ostream& out, const Bureaucrat &val)
{
	out << "Bureaucrat name " << val.getName() << ", with grade " << val.getGrade();
	return (out);
}


