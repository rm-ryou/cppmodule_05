#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm: public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string& form);
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);
	~PresidentialPardonForm();

	void	execute(Bureaucrat const& executor) const;
};

#endif // !PRESIDENTIALPARDONFORM_H