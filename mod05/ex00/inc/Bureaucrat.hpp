#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>

class Bureaucrat
{
protected:
	const std::string	name;
	unsigned			grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name, unsigned grade);
	Bureaucrat(const Bureaucrat &other);
	virtual ~Bureaucrat();
	virtual Bureaucrat&	operator=(const Bureaucrat &other);
	std::string			getName();
	unsigned			getGrade();
	void				gradeUp(unsigned amount = 1);
	void				gradeDown(unsigned amount = 1);
};

#endif
