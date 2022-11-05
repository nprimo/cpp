#ifndef	SHRUB_H
# define SHRUB_H

# include "AForm.hpp"
# include <fstream>
# include <cstring>

class AForm;

class ShrubberyCreationForm : public AForm
{
private:
	std::string	target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &other);
	std::string	getTarget() const;
	void		createShrub();
	virtual void	execute(const Bureaucrat &executor) const;
};

#endif
