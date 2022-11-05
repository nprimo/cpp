#include "../inc/Form.hpp"

Form::Form() : name("default"), grade_to_sign(50), grade_to_exec(50)
{
	std::cout << "-- default Form constructor" << std::endl;
	this->sign = false;
}

Form::Form(const std::string name, const int grade_to_sign, const int grade_to_exec)\
: name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	std::cout << "-- Form constructor" << std::endl;
	this->sign = false;
}

Form::Form(const Form &other)
	: name(other.getName()), grade_to_sign(other.getGradeToSign()), grade_to_exec(other.getGradeToExec())
{
	this->sign = other.isSign();
}

Form::~Form()
{
	std::cout << "-- Form destructor" << std::endl;
}

// Does not make any sense...
Form&	Form::operator=(const Form &other)
{
	std::cout << "-- Form assignment operator" << std::endl;
	this->sign = other.sign;
	return (*this);
}

std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::isSign() const
{
	return (this->sign);
}
int		Form::getGradeToSign() const
{
	return (this->grade_to_sign);
}

int		Form::getGradeToExec() const
{
	return (this->grade_to_exec);
}

void	Form::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() <= this->getGradeToSign())
	{
		if (this->sign)
			throw Form::FormAlreadySigned();
		this->sign = true;
	}
	else
		throw Form::GradeTooLowException();
}

// Exception
const char*	Form::GradeTooHighException::what() const throw()
{
	return ("grade is too high!");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("grade is too low!");
}

const char*	Form::FormAlreadySigned::what() const throw()
{
	return ("form is already signed!");
}

std::ostream&	operator<<(std::ostream &out, const Form &val)
{
	out << "Form name: " << val.getName()
		<< "\n\tis signed: " << val.isSign()
		<< "\n\tgrade to be signed: " << val.getGradeToSign()
		<< "\n\tgrade to be executed: " << val.getGradeToExec();
	return (out);
}
