#include "Intern.hpp"
#define CALL_MEMBER_FN(obj, ptrToMember) ((obj).*(ptrToMember))

typedef AForm* (Intern::*t_make)(std::string target) const;

Intern::Intern()
{
	std::cout << "-- Default intern constructor" << std::endl;
}

Intern::Intern(const Intern &other)
{
	(void)other;
	std::cout << "-- Copy intern constructor" << std::endl;
}

Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	std::cout << "-- Assignment intern operator" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "-- Intern destructor" << std::endl;
}

AForm*	Intern::makeForm(std::string form_name, std::string target)
{
	AForm			*new_form = NULL;
	std::string		available_form[] = {
		"shrubbery form",
		"robotomy form",
		"presidential form"
	};
	t_make	makeFormList[] = {
		&Intern::makeShrubberyForm,
		&Intern::makeRobotomyForm, 
		&Intern::makePresidentialForm
	};

	int i;
	for (i = 0; i < 3; i++)
	{
		if (available_form[i].compare(0, form_name.size(), form_name) == 0)
			break ;
	}
	if (i < 3)
	{
		std::cout << "Intern create " << form_name << std::endl;
		new_form = CALL_MEMBER_FN(*this, makeFormList[i])(target);
	}
	else
		throw Intern::FormTypeIsNotValid();
	return (new_form);
}

AForm*	Intern::makePresidentialForm(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeShrubberyForm(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeRobotomyForm(std::string target) const
{
	return (new RobotomyRequestForm(target));
}

const char*	Intern::FormTypeIsNotValid::what() const throw()
{
	return ("form type is not valid!");
}
