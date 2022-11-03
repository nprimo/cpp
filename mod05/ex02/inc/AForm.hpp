#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool				sign;
	const int			grade_to_sign;
	const int			grade_to_exec;
public:
	AForm();
	AForm(const std::string name, const int grade_to_sign, const int grade_to_exec);
	AForm(const AForm &other);
	virtual ~AForm() = 0;
	AForm&		operator=(const AForm &other);
	std::string	getName() const;
	bool		isSign() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	void		beSigned(const Bureaucrat &bureau);
	void		execute(const Bureaucrat &executor) const;

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
	class FormNotSigned : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};


std::ostream&	operator<<(std::ostream &out, const AForm &val);
#endif
