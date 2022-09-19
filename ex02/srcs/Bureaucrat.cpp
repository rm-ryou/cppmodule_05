#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(): name_("None"), grade_(150)
{
	std::cout << "Bureaucrat Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade): name_(name), grade_(grade)
{
	std::cout << "Bureaucrat constructor called." << std::endl;
	if (this->grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat Copy constructor called." << std::endl;
	*this = bureaucrat;
}
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	std::cout << "Bureaucrat Copy assignment operator called." << std::endl;
	this->name_ = other.getName();
	this->grade_ = other.getGrade();
	return *this;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called." << std::endl;
}

const std::string&	Bureaucrat::getName() const
{
	return this->name_;
}

int	Bureaucrat::getGrade() const
{
	return this->grade_;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low.";
}

void	Bureaucrat::GradeDown()
{
	this->grade_ += 1;
	if (this->grade_ >150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::GradeUp()
{
	this->grade_ -= 1;
	if (this->grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade" << bureaucrat.getGrade();
	return os;
}

void	Bureaucrat::signForm(Form& form)
{
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const& form)
{
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << "Failed to execute." << std::endl;
	}
}