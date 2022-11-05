#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat	a("mario", 5);
	ShrubberyCreationForm b("ciao");

	a.signForm(b);
	a.executeForm(b);
	return (0);
}
