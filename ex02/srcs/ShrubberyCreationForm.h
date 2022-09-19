#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <fstream>

#include "Form.h"

class ShrubberyCreationForm: public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string& form);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const& executor) const;
};

#endif // !SHRUBBERYCREATIONFORM_H