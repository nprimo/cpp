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

	try
	{
		newForm = randomIntern.makeForm(" form", "home");
		mario.signForm(*newForm);
		mario.executeForm(*newForm);
		delete newForm;

	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
