#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				sign;
	const int			grade_to_sign;
	const int			grade_to_exec;
public:
	Form();
	Form(const std::string name, const int grade_to_sign, const int grade_to_exec);
	Form(const Form &other);
	~Form();
	Form&	operator=(const Form &other);
	std::string	getName() const;
	bool		isSign() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	void		beSigned(Bureaucrat &bureau);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class FormAlreadySigned : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};


std::ostream&	operator<<(std::ostream &out, const Form &val);
#endif
