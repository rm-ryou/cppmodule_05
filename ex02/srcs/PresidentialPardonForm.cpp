#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(): Form("NoName", 25, 5)
{
	std::cout << "Presidential Default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string& form): Form(form, 25, 5)
{
	std::cout << "Presidential Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): Form()
{
	std::cout << "Presidential Copy constructor called." << std::endl;
	*this = other;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	std::cout << "Presidential Copy assignment operator called." << std::endl;
	if (this != &other)
		this->Form::operator=(other);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential Destructor called." << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGrade2Execute())
		throw Form::GradeTooLowException();
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}