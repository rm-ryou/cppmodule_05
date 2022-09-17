#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Bureaucrat {
private:
	std::string	name_;
	int			grade_;
public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& bureaucrat);
	Bureaucrat&	operator=(const Bureaucrat& other);
	~Bureaucrat();

	const std::string&	getName() const;
	int	getGrade() const;
	
	class GradeTooHighException: public std::exception {
	public:
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		virtual const char*	what() const throw();
	};

	void	GradeDown();
	void	GradeUp();
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif // !BUREAUCRAT_H