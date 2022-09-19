#include "Bureaucrat.h"
#include "Form.h"
#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int	main()
{
	try {
		Intern	someRandomIntern;
		Bureaucrat	bureaucrat("hoge", 1);
		Form*	rrf;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf != NULL) {
			std::cout << rrf << std::endl;
			rrf->execute(bureaucrat);
		}
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "\x1b[31m===============================\x1b[39m" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat	bureaucrat("hoge", 1);
		Form*	rrf;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf != NULL) {
			std::cout << rrf << std::endl;
			rrf->execute(bureaucrat);
		}
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "\x1b[31m===============================\x1b[39m" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat	bureaucrat("hoge", 1);
		Form*	rrf;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		if (rrf != NULL) {
			std::cout << rrf << std::endl;
			rrf->execute(bureaucrat);
		}
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "\x1b[31m===============================\x1b[39m" << std::endl;
		Intern	someRandomIntern;
		Bureaucrat	bureaucrat("hoge", 1);
		Form*	rrf;

		std::cout << "\x1b[34m***method***\x1b[39m" << std::endl;
		rrf = someRandomIntern.makeForm("no target", "Bender");
		if (rrf != NULL) {
			std::cout << rrf << std::endl;
			rrf->execute(bureaucrat);
		}
		std::cout << "\x1b[34m***destructor***\x1b[39m" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}