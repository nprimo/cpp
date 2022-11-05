#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat				a("mario", 5);
	ShrubberyCreationForm	b("ciao");
	RobotomyRequestForm		c("luigi");
	PresidentialPardonForm	d("someone");

	a.signForm(b);
	a.executeForm(b);
	a.signForm(c);
	a.executeForm(c);
	a.signForm(d);
	a.executeForm(d);
	return (0);
}
