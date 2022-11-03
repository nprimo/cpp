#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	Bureaucrat&			operator=(const Bureaucrat &other);
	std::string			getName() const;
	int			getGrade() const;
	void				gradeUp(int amount = 1);
	void				gradeDown(int amount = 1);

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
