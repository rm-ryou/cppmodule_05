#include "Bureaucrat.h"
#include "Form.h"

int	main()
{
	try {
		Bureaucrat	bureaucrat;
		Form		form;
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		} catch (std::exception &e) {
		std::cerr << "Invalid GRADE. " << e.what() << std::endl;
	}
	try {
		std::cout << "=================================" << std::endl;
		Bureaucrat	bureaucrat("hoge", 10);
		Form		form("fuga", 50, 50);
		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		} catch (std::exception &e) {
		std::cerr << "Invalid GRADE. " << e.what() << std::endl;
	}
/*	try {
		Bureaucrat	grade;
		std::cout << grade << std::endl;
		grade.GradeUp();
		std::cout << grade << std::endl;
		grade.GradeDown();
		std::cout << grade << std::endl;
		grade.GradeDown();
		std::cout << grade << std::endl;
		grade.GradeDown();
	} catch (std::exception &e) {
		std::cerr << "Invalid GRADE." << e.what() << std::endl;
	}
	try {
		std::cout << "==================================" << std::endl;
		Bureaucrat	a("copy", 100);
		Bureaucrat	b(a);
		b.GradeUp();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		for (int i = 0; i < 100; i++) {
			if (a.getGrade() == 150)
				break;
			a.GradeDown();
		}
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Invalid GRADE." << e.what() << std::endl;
	}
	try {
		std::cout << "==================================" << std::endl;
		Bureaucrat	grade0("grade0", 0);
		std::cout << grade0 << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Invalid GRADE." << e.what() << std::endl;
	}
	try {
		std::cout << "==================================" << std::endl;
		Bureaucrat	grade10("grade10", 10);
		std::cout << grade10 << std::endl;
		for (int i = 0; i < 5; i++)
			grade10.GradeUp();
		std::cout << grade10 << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Invalid GRADE." << e.what() << std::endl;
	}
	try {
		std::cout << "==================================" << std::endl;
		Bureaucrat	grade1000("grade1000", 1000);
		std::cout << grade1000 << std::endl;
	} catch (std::exception &e) {
		std::cerr << "Invalid GRADE." << e.what() << std::endl;
	}*/
	return 0;
}