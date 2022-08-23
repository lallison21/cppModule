#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main() {

    try {
        Form *internForm;
        Bureaucrat bureaucrat = Bureaucrat("Harl", 5);
        Intern intern = Intern();
        internForm = intern.makeForm("robotomy request", "Hello");
        internForm->beSigned(bureaucrat);
        internForm->execute(bureaucrat);
        delete internForm;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what();
    }
    std::cout << std::endl;

    try {
        Form *internForm;
        Bureaucrat bureaucrat = Bureaucrat("Harl", 80);
        Intern intern = Intern();
        internForm = intern.makeForm("robotomy request", "Hello");
        internForm->beSigned(bureaucrat);
        internForm->execute(bureaucrat);
        delete internForm;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what();
    }
    std::cout << std::endl;

    try {
        Form *internForm;
        Bureaucrat bureaucrat = Bureaucrat("Harl", 70);
        Intern intern = Intern();
        internForm = intern.makeForm("robotomy request", "Hello");
        internForm->beSigned(bureaucrat);
        internForm->execute(bureaucrat);
        delete internForm;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what();
    }
}
