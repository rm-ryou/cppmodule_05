#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Noname", 145, 137)
{
	std::cout << "Shrubbery Default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string& form): Form(form, 145, 137)
{
	std::cout << "Shrubbery Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): Form()
{
	std::cout << "Shrubbery Copy constructor called." << std::endl;
	*this = other;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	std::cout << "Shrubbery Copy assignment operator called." << std::endl;
	if (this != &other)
		this->Form::operator=(other);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery Destructor called." << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGrade2Execute())
		throw Form::GradeTooLowException();
	std::string	file_path = this->getName() + "_shrubbery";
	std::ofstream	ofs(file_path);
	if (ofs.fail())
		throw "can't create file.";
	else {
		ofs << "." << std::endl;
		ofs << "|-- Bureaucrat.cpp" << std::endl;
		ofs << "|-- Bureaucrat.h" << std::endl;
		ofs << "|-- Form.cpp" << std::endl;
		ofs << "|-- Form.h" << std::endl;
		ofs << "|-- main.cpp" << std::endl;
		ofs << "|-- PresidentialPardonForm.cpp" << std::endl;
		ofs << "|-- PresidentialPardonForm.h" << std::endl;
		ofs << "|-- RobotomyRequestForm.cpp" << std::endl;
		ofs << "|-- RobotomyRequestForm.h" << std::endl;
		ofs << "|-- ShrubberyCreationForm.cpp" << std::endl;
		ofs << "L-- ShrubberyCreationForm.h" << std::endl;
		ofs.close();
	}
}