#include "../inc/AForm.hpp"

AForm::AForm() : name("default"), grade_to_sign(50), grade_to_exec(50)
{
	std::cout << "-- default Form constructor" << std::endl;
	this->sign = false;
}

AForm::AForm(const std::string name, const int grade_to_sign, const int grade_to_exec)
	: name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	std::cout << "-- Form constructor" << std::endl;
	this->sign = false;
}

AForm::AForm(const AForm &other)
	: name(other.getName()), grade_to_sign(other.getGradeToSign()), grade_to_exec(other.getGradeToExec())
{
	this->sign = other.isSign();
}

AForm::~AForm()
{
	std::cout << "-- Form destructor" << std::endl;
}

// Does not make any sense...
AForm&	AForm::operator=(const AForm &other)
{
	std::cout << "-- Form assignment operator" << std::endl;
	this->sign = other.sign;
	return (*this);
}

std::string	AForm::getName() const
{
	return (this->name);
}

bool	AForm::isSign() const
{
	return (this->sign);
}

int		AForm::getGradeToSign() const
{
	return (this->grade_to_sign);
}

int		AForm::getGradeToExec() const
{
	return (this->grade_to_exec);
}

void	AForm::beSigned(const Bureaucrat &bureau)
{
	if (bureau.getGrade() <= this->getGradeToSign())
	{
		if (this->sign)
			throw AForm::FormAlreadySigned();
		this->sign = true;
	}
	else
		throw AForm::GradeTooLowException();
}

void		AForm::execute(const Bureaucrat &executor) const
{
	if (!this->isSign())
		throw AForm::FormNotSigned();
	if (this->getGradeToExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
}

// Exception
const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("grade is too high!");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("grade is too low!");
}

const char*	AForm::FormAlreadySigned::what() const throw()
{
	return ("form is already signed!");
}

const char*	AForm::FormNotSigned::what() const throw()
{
	return ("form is not signed!");
}

// print form
std::ostream&	operator<<(std::ostream &out, const AForm &val)
{
	out << "Form name: " << val.getName()
		<< "\n\tis signed: " << val.isSign()
		<< "\n\tgrade to be signed: " << val.getGradeToSign()
		<< "\n\tgrade to be executed: " << val.getGradeToExec();
	return (out);
}
