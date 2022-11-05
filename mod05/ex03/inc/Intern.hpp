#ifndef INTERN_H
# define INTERN_H

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"


class Intern
{

public:
	Intern();
	Intern(const Intern &other);
	~Intern();
	Intern&	operator=(const Intern &other);
	AForm*	makeForm(std::string form_name, std::string target);
	AForm*	makeShrubberyForm(std::string target) const;
	AForm*	makeRobotomyForm(std::string target) const;
	AForm*	makePresidentialForm(std::string target) const;
	class FormTypeIsNotValid : public std::exception
	{
	public:
		const char*	what() const throw();
	};	
};

#endif
