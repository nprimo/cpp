#include "../inc/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	a("mario", 5);
	Bureaucrat	b;
	Bureaucrat	c(a);
	// Bureaucrat	d("someone", 0);
	Bureaucrat	e("someone else", 151);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	a.gradeDown();
	b.gradeUp(10);
	c.gradeDown(20);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	b = a;

	std::cout << b << std::endl;
	std::cout << a << std::endl;
	return (0);
}
