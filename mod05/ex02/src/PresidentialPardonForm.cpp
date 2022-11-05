#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("ShrubForm", 72, 45), target("default")
{
	std::cout << "-- PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("ShrubForm", 72, 45), target(target)
{
	std::cout << "-- PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: AForm("ShrubForm", 72, 45), target(other.getTarget())
{
	std::cout << "-- PresidentialPardonForm copy constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "-- PresidentialPardonForm destructor" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->target = other.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->isSign())
		throw AForm::FormNotSigned();
	if (this->getGradeToExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
