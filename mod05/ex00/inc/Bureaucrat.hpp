#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	unsigned			grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, unsigned grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	Bureaucrat&			operator=(const Bureaucrat &other);
	std::string			getName() const;
	unsigned			getGrade() const;
	void				gradeUp(unsigned amount = 1);
	void				gradeDown(unsigned amount = 1);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat &val);

#endif
