#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.h"

class Form {
private:
	const std::string	name_;
	bool				isSigned_;
	const int			grade2Sign_;
	const int			grade2Execute_;
public:
	Form();
	Form(const std::string& name, const int grade2sign, const int grade2execute);
	Form(const Form& form);
	Form&	operator=(const Form& other);
	~Form();

	const std::string&	getName() const;
	bool	getIsSigned() const;
	int		getGrade2Sign() const;
	int		getGrade2Execute() const;

	void	beSigned(Bureaucrat& bureaucrat);

	class GradeTooHighException: public std::exception {
	public: virtual const char*	what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public: virtual const char*	what() const throw();
	};
};

std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif // !FORM_H