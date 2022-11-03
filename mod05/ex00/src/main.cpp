#include "../inc/Bureaucrat.hpp"

int main(void)
{
	const Bureaucrat	*a = new Bureaucrat("mario", 5);
	const Bureaucrat	*b = new Bureaucrat();
	const Bureaucrat	*c = new Bureaucrat(a);

	delete a;
	delete b;
	delete c;
	return (0);
}
