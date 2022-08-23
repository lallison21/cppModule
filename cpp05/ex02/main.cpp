#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void){
    try {
        Bureaucrat bro = Bureaucrat("Bru", 140);
        Bureaucrat bro1 = Bureaucrat("Bru1", 4);
        PresidentialPardonForm pres = PresidentialPardonForm("he");
        pres.beSigned(bro1);
        pres.execute(bro1);
		pres.execute(bro);
    }catch (std::exception &e) {
        std::cout << "Error: " << e.what() << "\n";
    }
    std::cout << std::endl;
    try {
        Bureaucrat tro = Bureaucrat("Tro", 80);
        Bureaucrat tri = Bureaucrat("Tri", 20);
        RobotomyRequestForm robotomyRequestForm = RobotomyRequestForm("he");
        robotomyRequestForm.beSigned(tri);
		robotomyRequestForm.beSigned(tro);
        robotomyRequestForm.execute(tri);
		robotomyRequestForm.execute(tro);
    }catch (std::exception &e) {
        std::cout << "Error: " << e.what();
    }
    std::cout << std::endl;
    try {
        Bureaucrat trt = Bureaucrat("Trt", 150);
        Bureaucrat trh = Bureaucrat("Trh", 20);
        ShrubberyCreationForm shrubberyCreationForm = ShrubberyCreationForm("shru");
		shrubberyCreationForm.execute(trh);
        shrubberyCreationForm.beSigned(trh);
        shrubberyCreationForm.execute(trh);
		shrubberyCreationForm.execute(trt);
    }catch (std::exception &e) {
        std::cout << "Error: " << e.what();
    }
    return (0);
}
