#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubForm", 145, 137), target("default")
{
	std::cout << "-- ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubForm", 145, 137), target(target)
{
	std::cout << "-- ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm("ShrubForm", 145, 137), target(other.getTarget())
{
	std::cout << "-- ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "-- ShrubberyCreationForm destructor" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->target = other.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->isSign())
		throw AForm::FormNotSigned();
	if (this->getGradeToExec() < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::string		fname = this->target + "_shrubbery";
	char*			fnameChar = new char[fname.size() + 1];
	std::strcpy(fnameChar, fname.c_str());

	std::ofstream	file(fnameChar);

	file << "	                                              ." << std::endl;
	file << "                                   .         ;" << std::endl;
	file << "      .              .              ;%     ;;" << std::endl;
	file << "        ,           ,                :;%  %;" << std::endl;
	file << "         :         ;                   :;%;'     .," << std::endl;
	file << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	file << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	file << "             `@%.  `;@%.      ;@@%;" << std::endl;
	file << "               `@%%. `@%%    ;@@%;" << std::endl;
	file << "                 ;@%. :@%%  %@@%;" << std::endl;
	file << "                   %@bd%%%bd%%:;" << std::endl;
	file << "                     #@%%%%%:;;" << std::endl;
	file << "                     %@@%%%::;" << std::endl;
	file << "                     %@@@%(o);  . '" << std::endl;
	file << "                     %@@@o%;:(.,'" << std::endl;
	file << "                 `.. %@@@o%::;" << std::endl;
	file << "                    `)@@@o%::;" << std::endl;
	file << "                     %@@(o)::;" << std::endl;
	file << "                    .%@@@@%::;" << std::endl;
	file << "                    ;%@@@@%::;." << std::endl;
	file << "                   ;%@@@@%%:;;;." << std::endl;
	file.close();
	delete[] fnameChar;
}
