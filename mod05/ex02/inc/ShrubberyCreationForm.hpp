#ifndef	SHRUB_H
# define SHRUB_H

# include "AForm.hpp"

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
};

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubForm", 145, 137), target("default")
{
	std::cout << "-- ShrubberyCreationForm default constructor";
	// create file <target>_shrubbery
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubForm", 145, 137), target(target)
{
	std::cout << "-- ShrubberyCreationForm constructor";
	// create file <target>_shrubbery

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm("ShrubForm", 145, 137), target(other.getTarget())
{
	std::cout << "-- ShrubberyCreationForm copy constructor";
	// create file <target>_shrubbery
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "-- ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->target = other.getTarget();
}


std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

#endif
