#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <cstring>

int main(void)
{
	Intern		randomIntern;
	AForm		*newForm;
	Bureaucrat	mario("mario", 5);

	newForm = randomIntern.makeForm("shrubbery form", "home");
	if (newForm)
	{
		mario.signForm(*newForm);
		mario.executeForm(*newForm);
		delete newForm;
	}
	return 0;
}
