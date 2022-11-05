#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat				a("mario", 5);
	ShrubberyCreationForm	b("ciao");
	RobotomyRequestForm		c("luigi");

	a.signForm(b);
	a.executeForm(b);
	a.signForm(c);
	a.executeForm(c);
	return (0);
}
