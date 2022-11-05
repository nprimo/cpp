#ifndef	ROBOTMOY_H
# define ROBOTMOY_H

# include "AForm.hpp"
# include <fstream>
# include <cstdlib>
# include <time.h>

class AForm;

class RobotomyRequestForm : public AForm
{
private:
	std::string	target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm&	operator=(const RobotomyRequestForm &other);
	std::string	getTarget() const;
	virtual void	execute(const Bureaucrat &executor) const;
};

#endif
