#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(): Form("Noname", 72, 45)
{
	std::cout << "Robotomy Default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string form): Form(form, 72, 45)
{
	std::cout << "Robotomy constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): Form()
{
	std::cout << "Robotomy Copy constructor called." << std::endl;
	*this = other;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	std::cout << "Robotomy Copy assignment operator called." << std::endl;
	if (this != &other)
		this->Form::operator=(other);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy Destructor called." << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (executor.getGrade() > this->getGrade2Execute())
		throw Form::GradeTooLowException();
	std::cout << "[Drilling sound]\t Gaaa..." << std::endl;
	std::srand(time(NULL));
	if (std::rand() % 2 == 0)
		std::cout << "Successfully robotized." << std::endl;
	else
		std::cout << "Failed to robotize." << std::endl;
}