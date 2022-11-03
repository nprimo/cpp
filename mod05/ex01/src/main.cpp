#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main(void)
{
	Bureaucrat	a("mario", 5);
	Form		b("long stuff", 10, 123);	
	
	a.signForm(b);
	a.gradeDown(100);
	a.signForm(b);
	a.gradeUp(100);
	a.signForm(b);
	return (0);
}
