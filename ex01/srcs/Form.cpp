#include "Form.h"

Form::Form(): name_("None"), isSigned_(false), grade2Sign_(10), grade2Execute_(10)
{
	std::cout << "Form Default constructor called." << std::endl;
}

Form::Form(const std::string& name, const int grade2sign, const int grade2execute): name_(name), isSigned_(false), grade2Sign_(grade2sign), grade2Execute_(grade2execute)
{
	std::cout << "Form constructor called." << std::endl;
	if (this->grade2Sign_ < 1 || this->grade2Execute_ < 1)
		throw Form::GradeTooHighExeption();
	else if (this->grade2Sign_ < 1 || this->grade2Execute_ < 1)
		throw Form::GradeTooLowExeption();
}

Form::Form(const Form& form): Form()
{
	std::cout << "Form Copy constructor called." << std::endl;
	*this = form;
}

Form&	Form::operator=(const Form& other)
{
	std::cout << "Form Copy assignment operator called." << std::endl;
	const_cast<std::string&>(this->name_)  = other.getName();
	this->isSigned_ = other.getIsSigned();
	const_cast<int&>(this->grade2Sign_) = other.getGrade2Sign();
	const_cast<int&>(this->grade2Execute_) = other.getGrade2Execute();
	return *this;
}

Form::~Form()
{
	std::cout << "Form Destructor called." << std::endl;
}

const std::string&	Form::getName() const
{
	return this->name_;
}

bool	Form::getIsSigned() const
{
	return this->isSigned_;
}

int	Form::getGrade2Sign() const
{
	return this->grade2Sign_;
}

int	Form::getGrade2Execute() const
{
	return this->grade2Execute_;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade too high.";
}

const char*	Form::GradeLowHighException::what() const throw()
{
	return "Grade too low.";
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade2Sign_)
		throw GradeTooLowException();
	this->isSigned_ = true;
}