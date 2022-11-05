#ifndef	PRESIDENTIAL_H
# define PRESIDENTIAL_H

# include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
private:
	std::string	target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm&	operator=(const PresidentialPardonForm &other);
	std::string	getTarget() const;
	virtual void	execute(const Bureaucrat &executor) const;
};

#endif
