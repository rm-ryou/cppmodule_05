#ifndef INTERN_H
#define INTERN_H

#include "Form.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

class Intern {
private:

public:
	Intern();
	Intern(const Intern& intern);
	Intern&	operator=(const Intern& other);
	~Intern();

	Form*	makeForm(std::string name, std::string target);
};

#endif // !INTERN_H