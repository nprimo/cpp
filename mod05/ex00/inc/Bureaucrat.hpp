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
	~Bureaucrat();
	Bureaucrat&			operator=(const Bureaucrat &other);
	std::string			getName() const;
	unsigned			getGrade() const;
	void				gradeUp(unsigned amount = 1);
	void				gradeDown(unsigned amount = 1);
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat &val);

#endif
