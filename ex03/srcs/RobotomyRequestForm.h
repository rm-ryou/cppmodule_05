#ifndef ROBOTMYREQUESTFORM_H
#define ROBOTMYREQUESTFORM_H

#include <ctime>
#include <cstdlib>

#include "Form.h"

class RobotomyRequestForm: public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);
	~RobotomyRequestForm();

	void	execute(Bureaucrat const& executor) const;
};

#endif // !ROBOTMYREQUESTFORM_H