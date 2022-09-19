#include "Bureaucrat.h"
#include "Form.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int	main()
{
	try {
		Bureaucrat	bureaucrat("hoge", 5);
		Bureaucrat	B_copy(bureaucrat);
		PresidentialPardonForm	president;
		RobotomyRequestForm		roboto;
		ShrubberyCreationForm	shrubbery;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << B_copy << std::endl;
		std::cout << president << std::endl;
		std::cout << roboto << std::endl;
		std::cout << shrubbery << std::endl;
		B_copy.GradeUp();
		president.execute(B_copy);
		roboto.execute(bureaucrat);
		shrubbery.execute(B_copy);

		B_copy.executeForm(president);
		bureaucrat.executeForm(roboto);
		B_copy.executeForm(shrubbery);

		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "\x1b[31m===============================\x1b[39m" << std::endl;
		Bureaucrat	bureaucrat("hoge", 1);
		PresidentialPardonForm	president;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << president << std::endl;
		bureaucrat.signForm(president);
		bureaucrat.executeForm(president);
		std::cout << president << std::endl;
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;

	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "\x1b[31m===============================\x1b[39m" << std::endl;
		Bureaucrat	bureaucrat("hoge", 1);
		RobotomyRequestForm	roboto;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << roboto << std::endl;
		bureaucrat.signForm(roboto);
		bureaucrat.executeForm(roboto);
		std::cout << roboto << std::endl;
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "\x1b[31m===============================\x1b[39m" << std::endl;
		Bureaucrat	bureaucrat("hoge", 1);
		ShrubberyCreationForm	shrubbery;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		std::cout << bureaucrat << std::endl;
		std::cout << shrubbery << std::endl;
		bureaucrat.signForm(shrubbery);
		bureaucrat.executeForm(shrubbery);
		std::cout << shrubbery << std::endl;
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}