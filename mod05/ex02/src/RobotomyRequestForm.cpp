#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("ShrubForm", 72, 45), target("default")
{
	std::cout << "-- RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("ShrubForm", 72, 45), target(target)
{
	std::cout << "-- RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm("ShrubForm", 72, 45), target(other.getTarget())
{
	std::cout << "-- RobotomyRequestForm copy constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "-- RobotomyRequestForm destructor" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->target = other.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->isSign())
		throw AForm::FormNotSigned();
	if (this->getGradeToExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << "*** drilling noise ***" << std::endl;
	srand( (unsigned)time(NULL));
	if ((std::rand() % 100) > 49)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "failure" << std::endl;
}
