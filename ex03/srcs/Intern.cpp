#include "Intern.h"

Intern::Intern()
{
	std::cout << "Intern Default constructor called." << std::endl;
}

Intern::Intern(const Intern& intern)
{
	std::cout << "Intern Copy constructor called." << std::endl;
	*this = intern;
}

Intern&	Intern::operator=(const Intern& other)
{
	std::cout << "Intern Copy assignment operator called." << std::endl;
	(void)other;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called." << std::endl;
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::cout << "Intern creates " << name << std::endl;
	int	index = (name == "shrubbery creation") * 1 + \
				(name == "robotomy request") * 2 + \
				(name == "presidential pardon") * 3;

	switch (index)
	{
	case 1:
		return new ShrubberyCreationForm(target);
		break;
	case 2:
		return new RobotomyRequestForm(target);
		break;
	case 3:
		return new PresidentialPardonForm(target);
		break;
	default:
		std::cout << "Invalid target form." << std::endl;
		return NULL;
		break;
	}
}